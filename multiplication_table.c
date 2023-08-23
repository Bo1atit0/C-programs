#include <stdio.h>

/*
* main - multiplication table for numbers .
*
* Return - x.
*/

int main(void)
{
  int num, i, res, x;

  printf("Input number: ");
  x = scanf("%d", &num);
 printf("\nMultiplication Table for %d\n\n", num);
  for (i = 1; i <= 50; i++)
    {
      res = num * i;
     
      printf("%d x %d = %d\n\n", num, i, res);
    }
  return (x);
}