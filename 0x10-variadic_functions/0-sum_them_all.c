#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sfsad
 * @n: adsfas
 * Return: sadf
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list lista;

	if (n > 0)
	{
		va_start(lista, n);
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(lista, int);
		}
		va_end(lista);
	}
	return (sum);
}
