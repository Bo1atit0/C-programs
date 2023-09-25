#include<stdio.h>

int *returnpointer(int *);
void main()
{
    int a[] = {1,2,3,4,5};
    int *p = returnpointer(a);
    printf("%d\n", *p);
}

int *returnpointer(int *ptr)
{
    ptr = ptr + 2;
    return (ptr);
}