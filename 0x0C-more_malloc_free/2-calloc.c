#include "main.h"
#include <stdlib.h>

/**
 * _memset-Fills memory with a constant byte.
 * @s:the starting address of memory to be filled
 * @b:the constant value.
 * @n:number of bytes to change in memory area.
 * Return:0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0 ; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
