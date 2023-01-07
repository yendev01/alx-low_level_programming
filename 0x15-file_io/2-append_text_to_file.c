#include "main.h"

/**
  * append_text_to_file - functions that appends text at the end of a file
  * @filename: ..
  * @text_content: ..
  * Return: 1 on success and -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t wd;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		wd = write(fd, text_content, i);

		if (wd != i)
			return (-1);
	}

	close(fd);
	return (1);
}
