#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch, ch2;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (ch2 = 'A' ; ch2 <= 'Z' ; ch++)
{
putchar(ch2);
}
putchar('\n');
return (0);
}
