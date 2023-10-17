#include "main.h"

/**
 * _puts - The function name
 * @str: Function parameter
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar (str[i]);
	_putchar ('\n');
}
