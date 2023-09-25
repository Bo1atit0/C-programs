#include <stdio.h>

int _pow_recursion(int x, int y)
{
    int res = 1, i;

if (y < 0)
{
    return (-1);
}
else if (y == 0)
{
    return (1);
}
// RECURSIVE METHOD
else
return (x * _pow_recursion(x, y - 1));

// ITERATIVE METHOD
    /* for (i = 0; i < y; i++)
    {
        res = res * x;
    }
return (res); */
}
int main(void)
{
    int r;

    r = _pow_recursion(0, 0);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}
