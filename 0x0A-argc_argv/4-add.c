#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
int revisar(char *s);
/**
 * main - arcg, *argv print the name of program
 * @argc: count parameters
 * @argv: array parameters
 * Return: return
 *
 */
int main(int argc, char *argv[])
{
int a = 0, num, suma;


for (a = 1; a < argc; a++)
{
if (revisar(argv[a]))
{
num = atoi(argv[a]);
suma = suma + num;
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d", suma);
printf("\n");
return (0);
}

/**
 * revisar - revisa si  a char es un digit.
 * @s: char
 * Return: return 1 y 0
 */
int revisar(char *s)
{
int b = 0;

for (b = 0; s[b] != '\0'; b++)
{
if (!isdigit(s[b]))
{
return (0);
}
}
return (1);
}
