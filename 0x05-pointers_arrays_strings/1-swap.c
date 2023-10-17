#include "main.h"

/**
 * swap_int - The function name
 * @a: The first parameter
 * @b: The second parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
