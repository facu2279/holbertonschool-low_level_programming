#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - afda
 * @separator: asdf
 * @n: asdfa
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list lista;

if (n > 0)
{
	va_start(lista, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(lista, char*);
		if (s != NULL)
		{
			printf("%s", s);
			if (separator != NULL)
			{
				if (i != n - 1)
				{
					printf("%s", separator);
				}
			}
		}
		else
		{
			printf("(nil)");
		}
	}
	putchar('\n');
	va_end(lista);
}
}
