#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- this reads the  text file print to its STDOUT.
 * @filename: this is the text file being currently read.
 * @letters: this shows the number of letters to be read
 * Return: www- these are the actual numbers of bytes read and printed
 *        0 should be returned when a function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
        t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf,t);

	free(buf);
	close(fd);
	return (w);
}
