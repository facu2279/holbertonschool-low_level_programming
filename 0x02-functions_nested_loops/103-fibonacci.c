#include <stdio.h>
/**
 * main - program to print fibonacci sequence (first 50)
 * Return: 0
 */
int main(void)
{
long int a, b, c, total;
a = 0;
b = 1;
c = 0;
total = 0;
while (c <= 4000000)
{
c = a + b;
if (c % 2 == 0)
{
total = total + c;
}
a = b;
b = c;
}
printf("%lu", total);
putchar('\n');
return (0);
}
