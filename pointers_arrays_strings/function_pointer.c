#include<stdio.h>


int add(int a, int b)
{
    printf("%d\n", a + b);
    return (a + b);
}

int sub(int a, int b)
{
      printf("%d\n", a - b);
}

int mul(int a, int b)
{
      printf("%d\n", a * b);
}

int div(int a, int b)
{
      printf("%d\n", a / b);
}

/*void display(int (*ptr)(int, int))
{
    (*ptr)(5, 1);
}*/
void main()
{
    int sum;
    int (*fptr)(int, int) = add;

    sum = (*fptr)(4, 3);
    printf("%d", sum);
}

