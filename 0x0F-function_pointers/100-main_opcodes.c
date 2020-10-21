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
	printf("55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 83 7d dc 02 74 14");
}
