#include "main.h"

/**
 * _strlen - count the number of strings presents.
 * @s: parameter.
 * Return: len.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
