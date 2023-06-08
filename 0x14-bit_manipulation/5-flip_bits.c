#include "main.h"
/**
 * flip_bits - counts the number of flips
 * you would need to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, check = 0;
	unsigned long int currentb;
	unsigned long int xor_this = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		currentb = xor_this >> a;
		if (currentb & 1)
			check++;
	}
	return (check);
}
