#include "main.h"
/**
 * puts2 - > prints every string. * @str: parameter.
 * @str: parameter.
 */
void puts2(char *str)
{
	int i, l;

	l = 0;
	while(str[l] != '\0')
		l++;
	for(i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
