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
int cambio, monedas = 0;

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
cambio = cambio - 25;
monedas++;
}
else if (cambio >= 10)
{
cambio = cambio - 10;
monedas++;
}
else if (cambio >= 5)
{
cambio = cambio - 5;
monedas++;
}
else if (cambio >= 2)
{
cambio = cambio - 2;
monedas++;
}
else
{
cambio--;
monedas++;
}
}
printf("%d\n", monedas);
return (0);
}
