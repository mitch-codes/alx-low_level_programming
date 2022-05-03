#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

/**
 * append_text_to_file - create a file and its contents
 *
 * @filename: a string of the file name
 * @text_content: the files content
 * Return: 1 or -1 for success or failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	count = strlen(text_content);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
	{
		return (-1);
	}
	write(fd, text_content, count);
	return (1);
}
