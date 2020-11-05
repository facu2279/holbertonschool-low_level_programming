#include "holberton.h"
/**
 * binary_to_uint - convert binary to decimal
 * @b: char received
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			num++;
	}
	return (num);
}
