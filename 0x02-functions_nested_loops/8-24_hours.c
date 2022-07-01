#include "main.h"

/**
 * jack_bauer - ;print every minute of the day.
 */
void jack_bauer(void)
{
	int n;
	int i;
	int m;
	int k;

	for (n = 0; n <= 2; n++)
	{
		for (i = 0; i <= 3; i++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (k = 0; k <= 9; k++)
				{
					_putchar('0' + n);
					_putchar('0' + i);
					_putchar(':');
					_putchar('0' + m);
					_putchar('0' + k);
					_putchar('\n');
				}
			}
		}
	}
}
