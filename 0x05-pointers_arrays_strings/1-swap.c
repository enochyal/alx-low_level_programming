#include "main.h"

/**
 * swap_int - interchange the values of two variables.
 * @a: parameter.
 * @b: parameter.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
