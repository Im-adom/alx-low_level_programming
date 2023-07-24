/**
 * add - This function finds the sum of two integers.
 * @a: the first integer.
 * @b: the second integer.
 * Return:  sum.
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - This function finds the difference of two integers.
 * @a: the first integer.
 * @b: the second integer.
 * Return: difference
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - This punction finds the product of two integers.
 * @a: the first integer.
 * @b: the second integer.
 * Return: product.
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - This function performs the division of two integers.
 * @a: the first integer.
 * @b: the second integer.
 * Return: dividend
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}
/**
 * mod - This function finds the modulus of two integers.
 * @a: the first integer.
 * @b: the second integer.
 * Return: modulus
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
