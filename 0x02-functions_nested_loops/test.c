#include <stdio.h>

int main(void){
  long int i, a, b, c;
  a = 0;
  b = 1;
  for (i = 1; i <= 50; i++)
    {
      c = a + b;
      printf("%ld", c);
      a = b;
      b = c;
      if (i != 50)
	{
	  printf(", ");
	}else{
	putchar('\n');
      }
    }


  return(0);
}
