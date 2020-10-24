#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - sdf
 * @separator: asdf
 * @n: sadf
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
        va_list lista;

        if (n > 0)
        {
                va_start(lista, n);
                for (i = 0; i < n; i++)
                {
                        printf("%i", va_arg(lista, int));
			if (separator != NULL)
			{
				if (i != n - 1)
				{
					printf("%s", separator);
				}
			}
		}
		putchar('\n');
		va_end(lista);
	}
	else
	{
		return;
	}
}
