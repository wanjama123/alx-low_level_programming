#include "main.h"
#include <stdio.h>

/**
* print_array - Print the elements of an integer array with proper formatting.
* @a: The array of integers
* @n: The number of elements in the array
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}
}

printf("\n");
}
