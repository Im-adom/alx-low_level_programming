#include "main.h"
/**
 * _strchr-Locates character in a string.
 * @s: a string.
 * @c: a character input.
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
