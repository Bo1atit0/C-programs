#include <stdio.h>

//RECURSIVE METHOD
int _sqrt(int n, int res);
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    return (_sqrt(n, 0));
}


//ITERATIVE METHOD
int _sqrt(int n, int res)
{

    if (res * res == n)
    {
        return (res);
    }

    if (res * res > n)
    {
        return (-1);
    }

    return (_sqrt(n, res + 1));
}

int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}