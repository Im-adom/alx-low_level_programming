#include "main.h"
/**
 * get_endianness - checks for the endianness of a machine.
 * Return: 0 for big-endian, 1 for little-endian
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *c = (char *) &b;

	return (*c);
}
