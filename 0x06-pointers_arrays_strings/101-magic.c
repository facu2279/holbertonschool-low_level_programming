#include <stdio.h>
#include "holberton.h"
/**
 * print_buffer - check the code for Holberton School students.
 * @b: pinter to int to be determined.
 * @size: int.
 * Return: void.
 */
void print_buffer(char *b, int size)
{
	if (size > 0)
	{
		int cont = 0, i, i2;
		int p = 0;
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", cont);
			printf("%02x%02x ", b[i], b[i + 1]);
			printf("%02x%02x ", b[i + 2], b[i + 3]);
			printf("%02x%02x ", b[i + 4], b[i + 5]);
			printf("%02x%02x ", b[i + 6], b[i + 7]);
			printf("%02x%02x ", b[i + 8], b[i + 9]);
			for (i2 = cont; i2 < cont + 10; i2 += 10)
			{
				for (p = 0; p < 10; p++)
				{
					if (b[i + p] >= 0 && b[i + p] <= 31)
					{
						putchar(46);
					}
					else
						putchar(b[i+ p]);
				}

			}

			cont = cont + 10;
			if(i % 10 == 0)
			{
				putchar('\n');
			}
		}
	}
	else
		printf("\n");
}
