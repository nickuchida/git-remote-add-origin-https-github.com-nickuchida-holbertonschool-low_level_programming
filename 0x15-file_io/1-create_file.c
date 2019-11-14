#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: source file
 * @text_content: characters to print from the file
 * Return: number of printed bytes
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wc, count;
	char *buffer[1024];

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	for (count = 0; text_content[count] != '\0'; count++)
		;

	wc = write(fd, buffer, count);
	if (wc == -1)
		return (-1);
	close(fd);

	return (1);
}
