#include <stdio.h>
#include <stdlib.h>
/**
* main - asdfasdf
* @argc: asdfsadfsdf
* @argv: sadfasdfsadf
* Return: sadfsadf
*/
int main(int argc, char *argv[])
{
	int cambio, counter = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cambio = atoi(argv[1]);
	while (cambio > 0)
	{
		if (cambio >= 25)
		{
			cambio -= 25;
			counter += 1;
		}
		else if (cambio >= 10)
		{
			cambio -= 10;
			counter += 1;
		}
		else if (cambio >= 5)
		{
			cambio -= 5;
			counter += 1;
		}
		else if (cambio >= 2)
		{
			cambio -= 2;
			counter += 1;
		}
		else
		{
			cambio -= 1;
			counter += 1;
		}
	}
	printf("%d\n", counter);
	return (0);
}
