#include "main.h"
/**
 * puts2 - > prints every string. * @str: parameter.
 * @str: parameter.
 */
void puts(char *str)
{
	int i, l;

	l = 0;
	while(s[l] != '\0')
		l++;
	for(i=0; i < l/2; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
