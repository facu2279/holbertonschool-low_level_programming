B#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b, c, d, si;
si = '0';
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
for (c = '0'; c <= '9'; c++)
{
for (d = '0'; d <= '9'; d++)
{
if (a + b != c + d)
{
si = '1';
}
else if (a == '0' || b == '0')
{
if (c == '0' || d == '0')
{
si = '1';
}
}
if (si == '1')
{
putchar(a);
putchar(b);
putchar(44);
putchar(c);
putchar(d);
putchar(32);
si = '0';
}
}
}
}
}
putchar('\n');
return (0);
}
