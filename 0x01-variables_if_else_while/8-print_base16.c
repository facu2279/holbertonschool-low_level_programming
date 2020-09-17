#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch2;
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (ch2 = 'a' ; ch2 <= 'f' ; ch2++)
{
putchar(ch2);
}
putchar('\n');
return (0);
}
