#include <stdio.h>
#include <stdlib.h>

/**
 * main - asdasdas
 *
 * @argc: asdasda
 * @argv: adasdas
 * Return: asdasds
 */
int main(int argc, char *argv[])
{
	int xd, i;
	unsigned char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	xd = atoi(argv[1]);
	if (xd < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < xd - 1; i++, p++)
	{
		printf("%02x ", *p);
	}
	p++;
	printf("%02x\n", *p);
}
