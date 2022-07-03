#include "main.h"

/**
 * _isupper - check if c is upper or not.
 *@c: parmaeter
 * Return: 0 or 1.
 */
int _isupper(int c)
{
	_putchar(c);
	_putchar(58);
	if (c <= 90 && c >= 65)
		return (1);
	return (0);
}
