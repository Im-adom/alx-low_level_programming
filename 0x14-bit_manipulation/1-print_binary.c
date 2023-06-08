#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, check = 0;
	unsigned long int currentb;

	for (a = 63; a >= 0; a--)
	{
		currentb = n >> a;
		if (currentb & 1)
		{
			_putchar('1');
			check++;
		}
		else if (check)
			_putchar('0');
	}
	if (!check)
		_putchar('0');
}
