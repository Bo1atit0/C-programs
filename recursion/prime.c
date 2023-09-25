#include <stdio.h>

int is_prime_number(int n)
{
    //int i;
    if (n < 2)
    {
        return (0);
    }
     if (n == 2)
    {
        return (1);
    }
 if (n % 2 == 0)
{
    return (0);
}
return (_prime_number(n, 3));
}
// ITERATIVE METHOD
//else 
//{
  //  for (int i = 3; i * i <= n; i = i + 2)
    //{

int _prime_number(int n, int i)
{
    if (n == i)
    {
        return (1);
    }

        if (n % i == 0)
        {
            return (0);
        }
    
    return (_prime_number(n, i + 2));
//}
}

int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}