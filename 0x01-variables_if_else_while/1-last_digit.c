#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, b;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
b = n % 10;
if (b > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, b);
}
else if (b < 6 && b != 0)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, b);
}
else
{
printf("Last digit of %i is %i\n", n, 0);
}
return (0);
}
