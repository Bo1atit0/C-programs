#include <stdio.h>

/*
* main - program that prints the first 50 Fibonacci numbers, starting with 1 and 2
*
*/

int main(void)
{
   
long int i, n1 = 1, n2 = 2;
long int nextn = n1 + n2;

printf("%3lu, %3lu, %3lu, ", n1, n2, nextn);

for (i = 4; i <= 50; i++)
{
     //printf("%d", nextn);
    n1 = n2;
    n2 = nextn;
    nextn = n1 + n2;
    if (i == 50)
    {
        printf("%lu", nextn);
    }
    else
    {
         printf("%3lu, ", nextn);
    }
    }
	printf("\n");
}