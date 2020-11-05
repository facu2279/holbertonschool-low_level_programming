#include "holberton.h"
/**
 * binary_to_uint - convert binary to decimal
 * @b: char received
 */
unsigned int binary_to_uint(const char *b)
{
	int dec = 0, i = 0, rem;
	while (b != 0) {
		rem = b % 10;
		b /= 10;
		dec += rem * pow(2, i);
		++i;
	}
	return dec;
}
