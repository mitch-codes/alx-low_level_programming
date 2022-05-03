#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

/**
 * read_textfile - read the contents of a separate file
 *
 * @filename: a string of the file name
 * @letters: the number of letters to be read
 * Return: the number of letters actually read;
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = strlen(text_content);

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
	}
	if (fd < 0)
	{
		return (-1);
	}
	write(fd, text_content, count);
	return (1);
}
