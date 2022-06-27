#include "main.h"

/**
 * print_last_digit - return the last digit.
 * @n: parameter.
 * Return: the last digit.
 */

int print_last_digit(int n)
{
	int r = n % 10;
	_putchar(r);
	return (r);
}
