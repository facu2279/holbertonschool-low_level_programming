#include <stdio.h>
#include "holberton.h"
/**
 * main - print numbers from 0 to 14
 * Return: aaaaa
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%i", i);
}
if (i != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
