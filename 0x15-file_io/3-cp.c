#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * copyText - copy text to new file
 *
 * @text_content: file content
 * @filename: name of file being copied to
 * Return: 0 or 1
 */
int copyText(char *text_content, char *filename)
{
	int fd;
	int count;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	count = strlen(text_content);
	fd = open(filename, O_WRONLY | O_CREAT, 0664);

	if (fd < 0)
	{
		return (-1);
	}
	write(fd, text_content, count);
	return (0);
}

/**
 * main - Entry point
 *
 * @argc: number of arguments being accepted
 * @argv: array of strings
 * Return: the number of letters actually read;
 */
int main(int argc ,char *argv[])
{
	int fd;
	int count;
	char *buff;

	if (argc < 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	printf("%s\n", argv[1]);

	if (argv[1] == NULL)
	{
		return (0);
	}
	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buff = malloc(1024);
	count = read(fd, buff, 1024);
	if (count < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	buff[count] = '\0';
	close(fd);
	copyText(buff, argv[2]);
	free(buff);
	return (count);
}

