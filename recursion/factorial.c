#include <stdio.h>

int factorial(int n)
{
    /*int res = n;
    int i = n - 1;
    */
   
if ( n < 0)
{
    return (-1);
}
else if ( n == 1)
{
    return (1);
}

// recursive approach

else
{
    return (n * factorial(n - 1));
}


// iterative approach

   /* while(i >= 1)
    {
        res = res * i;
        i--;
    }
    return (res); */
}

int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}