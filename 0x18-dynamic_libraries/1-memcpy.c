#include "main.h"
/**
 * _memcpy- copies memory area.
 * @dest: memory where it is stored at.
 * @src: memory where it is copied from.
 * @n: the number of bytes.
 * Return: copied memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
