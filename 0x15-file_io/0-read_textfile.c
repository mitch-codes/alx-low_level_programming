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
	int fd;
	int count;
	char *buff;

	fd = open(filename, O_RDONLY);
	buff = malloc(2000);
	count = read(fd, buff, letters);
	buff[count] = '\0';
	close(fd);
	dprintf(1, "%s", buff);
	free (buff);
	return (count);
}
