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
printf("Last digit of %i is %i and is greater than %i\n", n, b, 5);
}
else if (b == 0)
{
printf("Last digit of %i is %i\n", n, 0);
}
else
{
printf("Last digit of %i is %i and is less than %i and not %i\n", n, b, 6, 0);
}
return (0);
}
