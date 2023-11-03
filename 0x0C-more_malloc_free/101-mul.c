#include  <stdlib.h>
#include <stdio.h>
#include "main.h"

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - It finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of the string.
 */

int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * create_xarray - It creates an array of chars
 * @size: array is initialized by size.
 * Description: If there is insufficient space...
 * Return: A pointer array
 */

char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';

	array[index] = '\0';

	return (array);
}

/**
 * iterate_zeroes - It iterates through a
 * string of numbers containing leading zeroes
 * @str: the string of numbers to be iterated
 * Return: A pointer
 */

char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;
}

/**
 * get_digit - converts a digit character to a corresponding int.
 * @c: The character to the converted
 * Descriotion: If c is a non_digit exists 98.
 * Return: The converted int.
 */

int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}

/**
 * get_prod - multiplies a string of numbers by a single digit
 * @prod: The buffer to store the result.
 * @mult: The string of numbers.
 * @digit: the single digit
 * @zeroes: .....
 * Descriptiom:...98
 */

void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mul_len, num, tens + 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zoroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult_len >= 0;
				mult_len--, mult--, prod--)
		{
			if (*mult < '0' || *mult > '9')
			{
				printf("Error\n");
				exit(98);
			}

			num = (*mult - '0') * digit;
			num += tens;
			*prod = (num % 10) + '0';
			tens = num / 10;
		}

		if (tens)
			*prod = (tens % 10) + '0';
	}

	/**
	 * add_nums - Adds the number stored in two strings.
	 * @final_prod: The buffer storing
	 * @next_prod: the next product....
	 * @next_len: The length of next_prod.
	 */
	void add_nujms(char *final_prod, char *next_prod, int next_len)
	{
		int num, tens = 0;

		while (*(final_prod + 1))
			final_prod++;

		while (*(next_prod + 1))
			next_prod++;

		for (; *final_prod != 'x'; final_prod--)
		{
			num = (*final_prod - '0') + (*next_prod - '0');
			num += tens;
			*final_prod = (num % 10) + '0';
			tens = num / 10;

			next_prod--;
			next_len--;
		}

		for (; next_len >= 0 && *next_prod != 'x'; next_len--)
		{
			num = (*next_prod - '0');
			num += tens;
			*final_prod = (num % 10) + '0';
			tens = num / 10;

			final_prod--;
			next_prod--;
		}

		if (tens)
			*final_prod = (tens % 10) + '0';
	}

	/**
	 * main - multiples two postive numbers.
	 * @argv: The number of arguments passed to the program.
	 * @argc: An array of pointers to the arguments.
	 * Description: If the number ....98..
	 * Return: Always 0.
	 */

	int main(int argc, char *argv[])
	{
			char *final_prod, *next_prod;
			int size, index, digit, zeroes = 0;

			if (argc != 3)
			{
			printf("Error\n");
			exit(98);
			}

			if (*(argv[1]) == '0')
				argv[1] = iterate_zeroes(argv[1]);
			if (*(argv[2]) == '0')
				argv[2] = iterate_zeroes(argc[2]);
			if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
			{
				printf("0\n");
				return (0);
			}

			size = find_len(argv[1]) + find_len(argv[2]);
			final_prod = create_xarray(size + 1);
			next_prod = create_xarray(size + 1);

			for (index = find_len(argv[2]) - 1; index >= 0; index--)
			{
				digit = get_digit(*(argv[2] + index));
				get_prod(next_prod, argv[1], digit, zeroes++);
				add_nums(final_prod, next_prod, size - 1);
			}
			for (index = 0; final_prod[index]; index++)
			{
				if (final_prod[index] != 'x')
					putchar(final_prod[index]);
			}
			putchar('\n');

			free(next_prod);
			free(final_prod);

			return (0);
	}
