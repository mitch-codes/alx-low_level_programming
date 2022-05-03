#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff[100];
	letters = (int) letters;
	fd = open(filename, O_RDONLY);
	printf ("file descptor: %d\n", fd);

	int count;
	count = read(fd, buff, letters + 1);
	printf ("LETTERS: %d\n", count);
	close(fd);
	printf ("%s", buff);
	dprintf(1, "%s \n", buff);
	return (strlen(buff));
}
