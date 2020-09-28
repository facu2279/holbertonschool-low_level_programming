#include "holberton.h"
void swap_int(int *a, int *b)
{
  int c, d;
  c = *a;
  d = *b;
  *a = d;
  *b = c;

}
