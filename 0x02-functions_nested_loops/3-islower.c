#include "main.h"

/**
 * _islower - check if  alphabet c if it is in lower case.
 * @c: parameter used for alphabet lower case check.
 * Return: success 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
