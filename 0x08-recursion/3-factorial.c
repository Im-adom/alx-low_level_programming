#include "main.h"
/**
 * factorial- Returns the factorial of a given number.
 * @n: the number to return the factorial from.
 * Return: 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
