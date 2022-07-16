#include "main.h"

/**
 * reset_to_98 -> used to reset to 98.
 * @n: parameter.
 */
void reset_to_98(int )
{
	int p = 402;
	int *n = &p;

	*n = 98;
if (p / 10 > 1)
{
	_putchar(p / 10 + '0');
	_putchar(p % 10 + '0');
}
}
