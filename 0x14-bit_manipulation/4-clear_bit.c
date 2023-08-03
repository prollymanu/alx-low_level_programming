#include "main.h"

/**
 * clear_bit - this should set the value of a given bit to 0.
 * @n: this shows the pointer to the number that is to be changed.
 * @index: this is the index of the bit that is used to clear.
 * Should return 1 for success and -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
