#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

/**
 * create_file - create a file and its contents
 *
 * @filename: a string of the file name
 * @text_content: the files content
 * Return: 1 or -1 for success or failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = strlen(text_content);

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	/*O_APPEND*/
	fd = open(filename, O_WRONLY);

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
