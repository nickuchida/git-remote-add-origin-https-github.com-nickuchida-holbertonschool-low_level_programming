#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: source file
 * @text_content: characters to print from the file
 * Return: number of printed bytes
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_CREAT, 0600);
	if (fd == -1)
		return (0);
	return (fd);
}
