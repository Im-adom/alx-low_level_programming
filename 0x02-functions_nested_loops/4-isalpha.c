#include "main.h"
/**
 * _isalpha- To show 1 if input is a letter.
 * otherwise show 0
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for letters. 0 if otherwise.
 */
int _isalpha(int c);
{
	if (( c >= 97 && c <= 122) || ( c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
