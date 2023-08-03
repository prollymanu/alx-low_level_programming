#include "main.h"

/**
 * flip_bits - this should count the number of bits that is to change.
 * @n: this is the first number.
 * @m: this is the second number
 * The number of bits to be changed should be returned.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, waaah = 0;
	unsigned long int ngorii;
	unsigned long int stima = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		ngorii = stima >> v;
		if (ngorii & 1)
			waaah++;
	}

	return (waaah);
}
