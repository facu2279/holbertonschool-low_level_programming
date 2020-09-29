#include <stdio.h>
/**
 * _atoi - sdfas
 *@s:sdfasd
 *Return: sdfasd
 */
int _atoi(char *s)
{
int i, a, b = 0, res = 0;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] >= 0 && s[a] <= 9)
{
while (s[a] >= 0 && s[a] <= 9)
{
s[b] = s[a];
a++;
b++;
}
}
}
for (i = 0; i <= b; i++)
{
res = res * 10 + s[i] - '0';
}
 if (res > 0)
{
return (res);
}
else
{
return(res * (-1));
}
}

