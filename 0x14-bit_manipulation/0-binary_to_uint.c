#include "main.h"

/**
 * binary_to_uint - this should convert a binary number to an unsigned int.
 * @b: this is the string which contains the binary number
 * The converted number is then returned.
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int zae_zae = 0;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		zae_zae = 2 * zae_zae + (b[p] - '0');
	}

	return (zae_zae);
}
