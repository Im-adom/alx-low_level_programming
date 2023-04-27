#include"main.h"

/**
 * _isupper-Checks for uppercase character.
 * @c: is the character to be checked
 * Return: 1 if char is uppercase, otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


