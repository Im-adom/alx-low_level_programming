#include "main.h"
/**
 * get_bit- returns the value of a bit at a given index.
 * @index: index of a bot.
 * @n: the number to search.
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int v_bit;

	if (index > 63)
		return (-1);

	v_bit = (n >> index) & 1;

	return (v_bit);
}
