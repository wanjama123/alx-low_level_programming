#include "main.h"
#include <stdio.h>

/**
 * main - it prints all the args content
 * @argc: Argument count
 * @argv: Argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
