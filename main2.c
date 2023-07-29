#include <stdio.h>

/**
* _sum: function that add two integers.
* @a: first integer.
* @b: second integer.
*/

int _sum(int a, int b);

int _sum(int a, int b)
{
    return (a + b);
}

int main(void)
{
  int total;
  
    /*Sylvia's test scores*/
   int test1 = 58;
   int test2 = 78;
   total = _sum(test1, test2);
   if (total >= 100)
   {
   printf("Sylvia's rank = FIRST\n");
   }
  
   /*Bola's test score*/
   test1 = 30;
   test2 = 70;
   total = _sum(test1, test2);
   if (total >= 100)
   {
    printf("Bola's rank = SECOND\n");
   }
  
     /*Agnes' test scores*/
   test1 = 85;
   test2 = 14;
   total = _sum(test1, test2);
   if (total >= 75 && total <= 99)
   {
    printf("Agnes' rank = THIRD\n");
   }
  
   /*Sampson's test scores*/
   test1 = 81;
   test2 = 12;
   total = _sum(test1, test2);
   if (total >= 50 && total <= 99 )
   {
    printf("Sampson's rank = FOURTH\n");
   }
  
   /*Smoke's test scores*/
    test1 = 32;
    test2 = 15;
    total = _sum(test1, test2);
    if (total < 50)
    {
    printf("Smoke's rank = FIFTH\n");
    }
  
    
   return (0);
   
}