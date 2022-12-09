#include "main.h"

/**
 * error_cases - handling errors according to their states
 * @error_status: status
 * @file: file
 * @fd: file descriptor
 */

void error_cases(int error_status, char *file, int fd)
{
	if (error_status == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error_status);
	}
	else if (error_status == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(error_status);
	}
	else if (error_status == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(error_status);
	}
	else if (error_status == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error_status);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: args num
 * @argv: array
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fd_from = 0, fd_to = 0, close_status = 0, i;
	ssize_t bytes_read = 1, bytes_written = 0;
	char *file_from = NULL, *file_to = NULL;
	char buff[1024];

	if (argc != 3)
		error_cases(97, NULL, 0);
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_cases(98, file_from, 0);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_cases(99, file_to, 0);
	}

	for (i = 0; i < 1024; i++)
		buff[i] = '\0';
	while (bytes_read)
	{
		bytes_read = read(fd_from, buff, 1024);
		if (bytes_read == -1)
			error_cases(98, file_from, 0);
		bytes_written = write(fd_to, buff, bytes_read);
		if (bytes_written == -1)
			error_cases(99, file_to, 0);
	}

	close_status = close(fd_from);
	if (close_status == -1)
		error_cases(100, NULL, fd_from);
	close_status = close(fd_to);
	if (close_status == -1)
		error_cases(100, NULL, fd_to);

	return (0);
}
