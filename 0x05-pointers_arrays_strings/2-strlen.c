#include "main.h"
/**
 * _strlen-This returns the length of a string.
 * @s: length of the string.
 * Return: l
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while ((*s = l) != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
