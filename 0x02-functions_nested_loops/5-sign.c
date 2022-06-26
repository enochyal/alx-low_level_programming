#include "main.h"

/**
 * print_sign - check for sign.
 * @n: parameter for sign.
 * Return: Always success.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
else
{
	_putchar('0');
	_putchar(',');
	_putchar(' ');
	return (0);
}
}
