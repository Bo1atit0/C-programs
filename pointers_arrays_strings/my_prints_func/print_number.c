#include <stdio.h>
#include <limits.h>
/**
 * print_number -  prints an integer.
 *
 * @n: integer to be printed.
 *
 */

void print_number(int n)
{
    int res, numdigits = 0;
    int temp = n;
    int i, div;

    if (n == 0)
    {
       putchar ('0');
    }
    else
    {
        if (n < 0)
        {
     putchar ('-');
     n = -n;
     temp = n;
        }
    
    while (temp != 0)
    {
        temp = temp / 10;
        numdigits++;
    }

    while (numdigits > 0)
    {
        div = 1;
    for (i = 0; i < numdigits-1; i++)
    {
        div = div * 10;
    }
res = n / div;
putchar (res + '0');
n = n % div;
numdigits--;
    }
}
}

int main(void)
{
    print_number(INT_MIN);
    putchar('\n');
    print_number(402);
    putchar('\n');
    print_number(1024);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-98);
    putchar('\n');
    return (0);
}