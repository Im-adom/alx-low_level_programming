#include "main.h"
/**
 * puts2-prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: input
 * Return: Print
 */
void puts2(char *str)
{
	int l = 0;
	int m = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	m = l - 1;
	for (n = 0 ; n <= m ; n++)
	{
		if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}
