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
	char *bufff;
	ssize_t fffddd;
	ssize_t www;
	ssize_t ttt;

	fffddd = open(filename, O_RDONLY);
	if (fffddd == -1)
		return (0);
	bufff = malloc(sizeof(char) * letters);
	ttt = read(fffddd, bufff, letters);
	www = write(STDOUT_FILENO, bufff,ttt);

	free(bufff);
	close(fffddd);
	return (www);
}
