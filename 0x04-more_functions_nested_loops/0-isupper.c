#include "main.h"

/**
 * _isupper - check if letter is upper
 * @x : The number to be checked
 * Return : 1 for the upper letter or 0 for any else
 */

int _isupper(int x)
{
	if (int x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
