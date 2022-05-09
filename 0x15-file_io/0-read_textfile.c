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
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count, y;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	/*if (letters < 1)*/
	/*{*/
	/*	return (0);*/
	/*}*/
	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		return (0);
	}
	if (fd < letters)
	{
		letters = fd;
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	count = read(fd, buff, letters);
	if (count < 0)
	{
		free(buff);
		return (0);
	}
	buff[count] = '\0';
	close(fd);
	if (strlen(buff) < 1)
	{
		free(buff);
		return (0);
	}
	y = write(1, buff, count);
	if (y < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (y);
}
