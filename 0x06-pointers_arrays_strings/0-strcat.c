#include "main.h"
/**
 * _strcat-A function that concatenates two strings.
 * @dest: the first string
 * @src: the second string
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while  (src[b] != '\0')
	{
		b++;
	}
	{
	dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}


