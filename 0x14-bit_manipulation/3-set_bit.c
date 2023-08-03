#include "main.h"

/**
 * set_bit - this should set a bit of a given index to 1.
 * @n: this shows the pointer of the number to change.
 * @index: the index of the bit should be set to 1
 * should return 1 to show success, and -1 to show failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
