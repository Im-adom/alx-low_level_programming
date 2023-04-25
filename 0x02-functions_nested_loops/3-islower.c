#include "main.h"
/**
 * _islower - To show 1 if input case in a lowercase
 * character. otherwise show 0
 *
 * @c: the character in ASCII code
 *
 * Return:1 for lowercase character. 0 if otherwise
 */
int _islower(int c);
{
	if (c >= 97 && c <=122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
