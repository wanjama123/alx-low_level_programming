#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Deetermines if the number given is positive or negative
 * Return: Always (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == o)
	{
		printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
