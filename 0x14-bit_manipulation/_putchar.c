#include "main.h"
#include <unistd.h>
/**
 * _putchar - this writes the character which is v to stdout
 * @v: This is the character that should be printed.
 * 1 is returned if the programme is succesful.
 * When error happens to occur, -1 is returned.
 */
int _putchar(char v)
{
	return (write(1, &v, 1));
}
