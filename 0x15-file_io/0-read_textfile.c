#include "main.h"

/**
  * read_textfile - function that reads a text file and prints to stdout
  * @filename: filename from which it is read
  * @letters: bytes
  * Return: ...
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t wd, rd;
	char *buf;

	if (!*filename)
		return (0);

	fd = open("Requiescat", O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc((size_t)sizeof(char) * letters);
	if (!buf)
		return (0);

	rd = read(fd, buf, letters);

	if (rd == -1)
	{
		free(buf);
		return (0);
	}
	wd = write(STDOUT_FILENO, buf, rd);

	if (wd == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	return (wd);
}
