#include "main.h"

/**
 * _strlen - string length
 * @s: string
 * Return: result
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 * Return: 1 or -1 (int)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int content_len;

	if (!filename)
		return (-1);

	if (text_content)
		content_len = _strlen(text_content);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	write(fd, text_content, content_len);
	close(fd);
	return (1);
}
