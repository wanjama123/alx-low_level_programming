#include "main.h"

/**
* puts2 - Print every other character of a string
* @str: The input string
*/
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);

i += 2;
}
_putchar('\n');
}

