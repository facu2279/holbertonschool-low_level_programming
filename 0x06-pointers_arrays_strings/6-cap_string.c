#include "holberton.h"
/**
 *cap_string - sdfas
 *@s: asdfas
 *Return: fsd
 */
char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ')
{
s[i + 1] = s[i] - 32;
}
if (s[i] == '\n')
{
s[i + 1] = s[i] - 32;
}
if (s[i] == '\t')
{
s[i + 1] = s[i] - 32;
}
if (s[i] == ',')
{
s[i + 1] = s[i] - 32;
}
if (s[i] == ';')
{
s[i + 1] = s[i] - 32;
}
if (s[i] == '.')
{
s[i + 1] = s[i] - 32;
}
if (s[i] == '!')
{
  s[i + 1] = s[i] - 32;
}
if (s[i] == '?')
{
s[i + 1] = s[i] - 32;
}
if (s[i] == '"')
{
s[i + 1] = s[i] - 32;
}
if (s[i] == '(')
{
s[i + 1] = s[i] - 32;
}
if (s[i] == ')')
{
s[i + 1] = s[i] - 32;
}
if (s[i] == '{')
{
s[i + 1] = s[i] - 32;
}
if (s[i] == ']')
{
s[i + 1] = s[i] - 32;
}
}
}
}
