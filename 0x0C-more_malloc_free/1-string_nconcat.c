#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);
/**
 *string_nconcat - concatenates two strings into a knew one
 *@s1: fist string
 *@s2: second string
 *@n: amount of characters to print from s2
 *Return: knew string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n > len2)
	{
		n = len2;
	}
	p = malloc(len1 + n + 1);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < n; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}

/**
 * _strlen - fdfdf
 * @s: sksksks
 * Return: sassassass
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
