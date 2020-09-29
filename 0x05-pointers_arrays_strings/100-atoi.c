#include <stdio.h>
/**
 * _atoi - sdfas
 *@s:sdfasd
 *Return: sdfasd
 */
int _atoi(char *s)
{
int res = 0;
for (int i = 0; s[i] != '\0'; i++)
if(s[i] >= 'a' && s[i] <= 'Z')
{
res = res * 10 + s[i] - '0';
}
return (res);
}
