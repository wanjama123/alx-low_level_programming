#include "main.h"
#include <stdio.h>

/**
 * main - It prints the number of args
 * @argc: Argument count
 * @argv: Argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
