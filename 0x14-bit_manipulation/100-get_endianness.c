#include "main.h"

/**
 * get_endianness - this function checks whether the  machine is little or big endian.
 * This should return 0 for big and 1 for small.
 */
int get_endianness(void)
{
	unsigned int w = 1;
	char *c = (char *) &w;

	return (*c);
}
