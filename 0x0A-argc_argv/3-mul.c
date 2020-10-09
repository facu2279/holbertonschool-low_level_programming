#include <stdio.h>
#include <stdlib.h>
/**
 * main - sadfa
 * @argc: sadf
 * @argv: asdfa
 * Return: asdfa
 */
int main(int argc, char *argv[])
{
  int num1, num2, res = 0;
  if (argc == 3)
    {
      num1 = atoi(argv[1]);
      num2 = atoi(argv[2]); 
      res = num1 * num2;
      printf("%d \n", res);
    }else{
    printf("Error \n");
    return (1);
  }
  return (0);
}
