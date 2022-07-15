#include "main.h"

/**
 * reset_to_98 -> used to reset to 98.
 * @n: parameter.
 */
void reset_to_98(int *n)
{
	n = 402;
	int *p = &n;

	*p = 98;
if (n / 10 > 1)
{
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}
}
