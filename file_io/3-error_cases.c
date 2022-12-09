#include "main.h"

/**
 * error_cases - handling errors according to their states
 * @error_status: status
 * @closef: close file
 * @file: file
 * @fd: file descriptor
 */

void error_cases(int error_status, char *closef, char *file, int fd)
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
		close(closef);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(error_status);
	}
	else if (error_status == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(error_status);
	}
}
