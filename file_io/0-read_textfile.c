#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, vread, vwrite;
	char *buff;

	if (!filename || !letters)
		return (0);

	buff = malloc(letters);
	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	if (!fd)
		return (0);

	vread = read(fd, buff, letters);
	printf("%d", vread);
	if (!vread)
		return (0);

	vwrite = write(STDOUT_FILENO, buff, letters);
	if (!vwrite)
		return (0);

	close(fd);
	free(buff);
	return (vread);
}
