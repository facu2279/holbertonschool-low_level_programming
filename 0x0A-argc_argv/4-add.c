#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
  int i, res;
  if (argc > 2)
    {
      for (i = 1; i < argc - 1; i++)
	{
	  if (isdigit(argv[i]))
	    {
	      if (isdigit(argv[i + 1]))
		{
		  res = res + atoi(argv[i]) + atoi(argv[i + 1]);
		}else{
		printf("Error \n");
		return (1);
	      }
	    }else{                                                                                                                                                                                                                                       printf("Error \n");
	    return (1);
	  }  
	}
    }else{
    printf("0 \n");
  }
    return (0);
}
