#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int ffffdddd);

/**
 * create_buffer - this allocate 1024 bytes for a buffer.
 * @file:this is the name of the file buffer that is storing chars for.
 *
 * Return: this is a pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffeerr;

	buffeerr = malloc(sizeof(char) * 1024);

	if (buffeerr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffeerr);
}

/**
 * close_file - this should close the file descriptors.
 * @fd: This is the file descriptor to be closed.
 */
void close_file(int fd)
{
	int dc;

	dc = close(fd);
	if (dc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main -this should Copy the contents of a file to another file.
 * @arwc: This is the number of arguments supplied to the program.
 * @arwv: This is an array of pointers to the arguments.
 *
 * Return: Should return 0 on success.
 *
 * Description: If the argument count is not correct the - exit code is 97.
 * If file_from does not exist or cannot be read then the- exit code is 98.
 * If file_to cannot be created or written then the - exit code is 99.
 * If file_to or file_from cannot be closed then the - exit code is 100.
 */
int main(int arwc, char *arwv[])
{
	int from, to, cr, cw;
	char *buffeerr;

	if (arwc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffeerr = create_buffer(arwv[2]);
	from = open(arwv[1], O_RDONLY);
	cr = read(from, buffeerr, 1024);
	to = open(arwv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || cr == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", arwv[1]);
			free(buffeerr);
			exit(98);
		}

		cw = write(to, buffeerr, cr);
		if (to == -1 || cw == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", arwv[2]);
			free(buffeerr);
			exit(99);
		}

		cr = read(from, buffeerr, 1024);
		to = open(arwv[2], O_WRONLY | O_APPEND);

	} while (cr > 0);

	free(buffeerr);
	close_file(from);
	close_file(to);

	return (0);
}
