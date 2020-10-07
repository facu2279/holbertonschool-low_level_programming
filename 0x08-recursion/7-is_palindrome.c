#include "holberton.h"
int palindrome(char *s, int first, int last);
int strlen_recursion(char *s);
/**
 * _strlen_recursion - sdfsa
 * @s: asdfa
 * Return: safa
 */
int _strlen_recursion(char *s)
{
int i;

i = 0;
if (*s != '\0')
{
s++;
i++;
i = i + (_strlen_recursion(s));
}
return (i);
}

/**
 * palindrome - asfdas
 * @s: sadfa
 * @first: adfa
 * @last: asdf;
 * Return: asdf
 */
int palindrome(char *s, int first, int last)
{
if (s[first] != s[last])
{
return (0);
}
if (first >= last)
{
return (1);
}
return (palindrome(s, (first + 1), (last - 1)));
}

/**
 * is_palindrome - dfa
 * @s: sadf
 * Return: sadf
 */
int is_palindrome(char *s)
{
int last, first;

first = 0;
last = _strlen_recursion(s);
return (palindrome(s, first, last - 1));
}
