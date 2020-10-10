#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
  int i, sum = 0, intermedia;

  for (i = 1; i < argc; i++)
    {
      intermedia = atoi(argv[i]);
      if (intermedia == 0 && *argv[i] != '0')
	{
	  printf("Error \n");
	  return (1);
	}
      sum = sum + intermedia; 
    }
  printf("%d\n", sum);
  return (0);
}
