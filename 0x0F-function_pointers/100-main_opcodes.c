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
	int xd;
	char *p = (char *)main;

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
}
