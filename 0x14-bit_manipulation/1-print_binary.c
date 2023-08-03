#include "main.h"

/**
 * print_binary - this function should print the binary equivalent of a decimal number.
 * @n: this is the number to print in binary index.
 */
void print_binary(unsigned long int n)
{
	int y, hesabu = 0;
	unsigned long int manzee;

	for (y = 63; y >= 0; y--)
	{
		manzee = n >> y;

		if (manzee & 1)
		{
			_putchar('1');
			hesabu++;
		}
		else if (hesabu)
			_putchar('0');
	}
	if (!hesabu)
		_putchar('0');
}
