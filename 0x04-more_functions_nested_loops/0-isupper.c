#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: The function parameter
 * Return : 1 if 'c' is an uppercase letter or otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
