#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lista;

	printf("%i", va_arg(lista, int));
}
