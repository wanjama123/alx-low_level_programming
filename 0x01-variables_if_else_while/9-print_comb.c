#include <stdio.h>

/**
 * main - prints the all possible combinstions of single digits numbers
 * Return: 0
 */
int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
	putchar(n);
	if (n != 57)
		{
	putchar(',');
	putchar(' ');
		}
}
putchar('\n');
return (0);
}
