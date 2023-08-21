#include <stdio.h>

/**
 * 
 * main -  program that finds and prints the sum of the even-valued terms
 *  in the Fibonacci sequence whose values do not exceed 4,000,000
 * 
*/

int main(void)
{
    long n1 = 1, n2 = 2, n3 = n1 + n2, sum = 2;

    while (n3 <= 4000000)
    {
        if (n3 % 2 == 0)
        {
            sum += n3;
        }
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }
    printf("%ld", sum);
}