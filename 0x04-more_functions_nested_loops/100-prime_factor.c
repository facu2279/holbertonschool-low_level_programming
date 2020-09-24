#include <stdio.h>
/**
 *main - addadd
 *Return: jfjjfjfj
 */
int main(void)
{
unsigned long int n, div, maxfact;
div = 2;
n = 612852475143;
while (n != 0)
{
if ((n % div) != 0)
{
div++;
}
else
{
maxfact = n;
n = n / div;
if (n == 1)
{
printf("%lu\n", maxfact);
break;
}
}
}
return (0);
}
