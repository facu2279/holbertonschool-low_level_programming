#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - sdafa
 * @s1: sadfa
 * @s2: sdf
 * @n: safd
 * Return: sadfa
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int largo1, largo2, i, j, k;

	if (n > 0)
	{
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
		for (largo1 = 0; s1[largo1] != '\0'; largo1++)
		{
		}
		for (largo2 = 0; s2[largo2] != '\0'; largo2++)
		{
		}
		if (largo2 < n)
		{
			n = largo2;
		}
		ar = (char *)malloc(largo1 + n);
		if (ar != NULL)
		{
			for (i = 0; i < largo1; i++)
			{
				ar[i] = s1[i];
			}
			k = 0;
			for (j = i; j < largo1 + n; j++)
			{
				ar[j] = s2[k];
				k++;
			}
			ar[j] = '\0';
			return (ar);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
