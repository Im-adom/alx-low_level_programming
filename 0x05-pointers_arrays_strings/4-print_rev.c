#include "main.h"
/**
 * print_rev- prints a string, in reverse, followed by a new line.
 * @s: string to print in reverse.
 */
void print_rev(char *s)
{
	int l = 0;
	int m;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (m = l; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

