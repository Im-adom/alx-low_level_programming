#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @index: the index of the bit to clear
 * @n: the pointer to the number to clear
 * Return: 1 otherwise -1(failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if  (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
		return (1);
}
