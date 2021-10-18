#include "main.h"

/**
 *read_textfile - reads textfile
 *@filename: file
 *@letters: number of letters to be read and printed
 *
 *Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	void *buf;
	size_t n;


	fd = open("filename", O_RDONLY);

	if (fd == -1 || filename == NULL)
		return (0);

	read(fd, buf, n);

	while (n != '\0')
	{
		n++;
		_putchar(n);
	}

	return (letters);
}
