#include "holberton.h"
/**
 *reverse_array - sdfasd
 *@a: adfasd
 *@n: sadfas
 */
void reverse_array(int *a, int n)
{
int c = 0, b;
n--;
while (n > c)
{
b = a[n];
a[n--] = a[c];
a[c++] = b;
}
}
