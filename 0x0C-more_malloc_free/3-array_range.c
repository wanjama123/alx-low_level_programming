#include "main.h"
#include <stdlib.h>

/**
* array_range - create an array of integers from min to max (inclusive).
* @min: the minimum value.
* @max: the maximum value.
* Return: a pointer to the newly created array.
*/

int *array_range(int min, int max)
{
	int *a, i = 0;

if (min > max)
return (NULL);

a = malloc(sizeof(int) * (max - min + 1));

if (a == NULL)
return (NULL);

while (min <= max)
{
a[i] = min;
i++;
min++;
}
return (a);
}
