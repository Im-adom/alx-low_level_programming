#include "main.h"
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
	return (0);
}
