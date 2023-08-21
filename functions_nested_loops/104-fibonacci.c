#include <stdio.h>

/**
 * 
 * main -
*/

int main(void)
{
    unsigned long long i, n1 = 1, n2 = 2;
unsigned long long nextn = n1 + n2;

printf("%llu, %llu, %llu, ", n1, n2, nextn);

for (i = 4; i <= 98; i++)
{
     //printf("%d", nextn);
    n1 = n2;
    n2 = nextn;
    nextn = n1 + n2;
    if (i == 98)
    {
        printf("%llu", nextn);
    }
    else
    {
         printf("%llu, ", nextn);
    }
    }
	printf("\n");
}