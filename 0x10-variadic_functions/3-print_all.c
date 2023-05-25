#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - this functtion can prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *abc = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", abc, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", abc, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", abc, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", abc, str);
					break;
				default:
					x++;
					continue;
			}
			abc = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(list);
}
