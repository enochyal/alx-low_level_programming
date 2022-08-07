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
	if(l % 2 == 1)
	{
		for(i = (l + 1) / 2; i < l; i++)
	{
		_putchar(str[i]);	
	}
	}
	else
	{
		for(i = (l / 2); i < l; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
