#include "main.h"

/**
 * print_array -> print array of intigers.
 * @a: parameter 1.
 * @n: parameter 2.
 */

void print_array(int *a, int n)
{
	int i;

	for(i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
}
