#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: source file
 * @letters: number of characters to print from file
 * Return: number of printed bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	int rc, wc;

	if (filename == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	rc = read(fd, buff, letters);
	if (rc == -1)
		return (0);

	wc = write(STDOUT_FILENO, buff, rc);
	if (wc == -1 || wc != rc)
		return (0);
	free(buff);

	if (close(fd))
		return (0);
	return (wc);
}
