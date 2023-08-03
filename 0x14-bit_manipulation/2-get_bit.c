#include "main.h"

/**
 * get_bit - this should return the value of a bit or bits at an index in a decimal number.
 * @n: this is the number or numbers to search.
 * @index: this is the index of a bit.
 * Return: the value of the bit should be returned.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int moto_moto;

	if (index > 63)
		return (-1);

	moto_moto = (n >> index) & 1;

	return (moto_moto);
}
