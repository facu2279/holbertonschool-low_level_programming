#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_strings - sadf
 * @separator: asdfasdf
 * @n: sdfsdf
 *
 * Return: sdfsdf
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lista;
	char *str;

	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(lista, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(lista);
	printf("\n");
}
