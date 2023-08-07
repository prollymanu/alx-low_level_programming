#include "main.h"

/**
 * append_text_to_file - should append a text at the end of  file.
 * @filename: This is a pointer to the name of the file.
 * @text_content: This is the string to add to the end of a file.
 *
 * Return: If it fails or filename is NULL -1.
 *         file does not exist and the user lacks writen permissions - -1.
 *         r else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int oo, wwww, peng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (peng = 0; text_content[peng];)
			peng++;
	}

	oo = open(filename, O_WRONLY | O_APPEND);
	wwww = write(oo, text_content, peng);

	if (oo == -1 || wwww == -1)
		return (-1);

	close(oo);

	return (1);
}
