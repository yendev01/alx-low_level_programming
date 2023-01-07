#include "main.h"

/**
  * create_file - function that creates a file
  * @filename: the name of file to create
  * @text_content: ...
  * Return: 1 on success, & -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t wd;

	if (!filename)
		return (-1);


	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);

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
