#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, a;
for (i = '0'; i <= '9'; i++)
{
for (a = '0'; a <= '9'; a++)
{
putchar(i);
putchar(a);
if (i == '9' && a == '9')
{
}
else
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
