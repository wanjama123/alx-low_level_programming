#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_char - Prints a character
* @list: The va_list that contains the character to print
* @sep: The separator string to use before printing the character
*/
void print_char(va_list list, char *sep)
{
printf("%s%c", sep, va_arg(list, int));
}

/**
* print_int - Prints an integer
* @list: The va_list that contains the integer to print
* @sep: The separator string to use before printing the integer
*/
void print_int(va_list list, char *sep)
{
printf("%s%d", sep, va_arg(list, int));
}

/**
* print_float - Prints a floating-point number
* @list: The va_list that contains the floating-point number to print
* @sep: The separator string to use before printing the floating-point number
*/
void print_float(va_list list, char *sep)
{
printf("%s%f", sep, va_arg(list, double));
}

/**
* print_string - Prints a string
* @list: The va_list that contains the string to print
* @sep: The separator string to use before printing the string
*/
void print_string(va_list list, char *sep)
{
char *str = va_arg(list, char *);

if (!str)
str = "(nil)";
printf("%s%s", sep, str);
}

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *sep = "";
va_list list;

va_start(list, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
print_char(list, sep);
break;
case 'i':
print_int(list, sep);
break;
case 'f':
print_float(list, sep);
break;
case 's':
print_string(list, sep);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
}
printf("\n");
va_end(list);
}
