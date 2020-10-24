#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printchar - print char
 * @str: string pointer
 * @list: arguments list
 */
void printchar(char *str, va_list list)
{
	printf("%s%c", str, va_arg(list, int));
}
/**
 * printint - print int
 * @str: string pointer
 * @list: arguments list
 */
void printint(char *str, va_list list)
{
	printf("%s%i", str, va_arg(list, int));
}
/**
 * printfloat - print float
 * @str: string pointer
 * @list: arguments list
 */
void printfloat(char *str, va_list list)
{
	printf("%s%f", str, va_arg(list, double));
}
/**
 * printstring - print string
 * @str: string pointer
 * @list: arguments list
 */
void printstring(char *str, va_list list)
{
	char *tmp;

	tmp = va_arg(list, char *);

	if (tmp == NULL)
	{
		tmp = "(nil)";
	}

	printf("%s%s", str, tmp);
}
/**
 * print_all - print string
 * @format: string pointer
 */
void print_all(const char * const format, ...)
{
	tipos type[] = {
		{"c", printchar},
		{"i", printint},
		{"f", printfloat},
		{"s", printstring},
		{NULL, NULL}
	};

	int y, j;
	va_list list;
	char *str;

	va_start(list, format);
	str = "";
	y = 0;
	while (format && format[y])
	{
		j = 0;
		while (j < 4)
		{
			if (type[j].car[0] == format[y])
			{
				type[j].f(str, list);
				str = ", ";
				break;
			}
			j++;
		}
		y++;
	}
	printf("\n");
	va_end(list);
}
