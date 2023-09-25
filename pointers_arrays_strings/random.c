#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, b, c, d, e;
    
    srand(time(NULL));
    a = rand() % 50;
    b = rand() % 50;
    c = rand() % 50;
    d = rand() % 50;
    e = rand() % 50;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
}