#include "main.h"

/**
 * -atoi -> convert string to intigers.
 *  @s: parameter.
 *  Return:intiger.
 */

int _atoi(char *s)
{
	int i, digit, j = 1, l, m = 0;

	l = 0;
	while(s[l] != '\0')
		l++;
	for(i = (l-1); i >= 0; i--)
	{
		if((s[i] >= '0' && s[i] <= '9') || s[i] == '-')
		{
			digit = s[i];
			if(digit == 45)
			{
				m = -m;
				continue;
				j = 10 * j;
			}
			else
			{
				digit = digit - 48;
				m = m + (digit*j);
				j = j*10;
			}
		}
		else
			continue;
	}
	return (m);
}
