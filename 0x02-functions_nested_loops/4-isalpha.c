#include "main.h"

/**
 * _isalpha - check alphabet or not.
 * @c: parameter used for _isalpha.
 * Return: 1 or 0.
 */

int _isalpha(int c)
{
	if (122 <= c <= 97 || 65 <= c <= 90)
		return (1);
	else
		return (0);
}
