#include <stdio.h>

/**
 * main - prints all possible different combinations of three digi numbers
 *Return: Always 0
 */
int main(void)
{
int n, m, l;

for (n = 48; n <= 56; n++)
{
for (m = 49; m <= 57; m++)
{

for (l = 50; l < 58; l++)
}
if (l > m && m > n)
{
putcher(l);
putchar(n);
putchar(m);
if (n != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
