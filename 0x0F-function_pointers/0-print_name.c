#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name-This prints a name using pointer to a function.
 * @f: the pointer to the function.
 * @name: the string to add.
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
