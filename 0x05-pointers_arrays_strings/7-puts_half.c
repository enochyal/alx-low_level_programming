#include "main.h"

/**
 * puts2 - > prints above half string.
 * @str: parameter.
 */  
void puts_half(char *str)
{
	int i, l;

	l = 0;
	while(str[l] != '\0')
		l++;
	for(i = l / 2; i < l; i++)
	{
		_putchar(str[i]);	
	}
	_putchar('\n');
}
