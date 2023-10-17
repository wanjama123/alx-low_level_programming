#include "main.h"
#include <stddef.h>

/**
 * rev_string - The function name
 * @s: Function parameter
 */
void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = 0; i < count / 2; i++)
	{
		char j;

		j = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = j;
	}
}
int main(void)
{
char s[] = "Hello, World!";
rev_string(s);
return (0);
}
