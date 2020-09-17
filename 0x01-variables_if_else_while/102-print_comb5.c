#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int a, b, c, d, si;
  si = '0';
  for (a = 48; a <= 57; a++){
      for (b = 48; b <= 57; b++){
	  for (c =48; c <= 57; c++){
	      for (d = 48; d <= 57; d++){
		  if ( a + b != c + d){
		    if ( a + b < c + d){
		      putchar(a);
		      putchar(b);
		      putchar(' ');
		      putchar(c);
		      putchar(d);
		      putchar(',');
		    }
		  }
		}
	    }
	}
    }
  putchar('\n');
  return (0);
}
