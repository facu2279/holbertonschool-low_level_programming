#include "function_pointers.h"
/**
 * print_name - dsfg
 * @name: sadf
 * @f: asdf
 */
void print_name(char *name, void (*f)(char *))
{
	if (name[0] != '\0' && f != 0)
	f(name);
}
