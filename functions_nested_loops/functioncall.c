#include <stdio.h>


int fun(char *, char *);
void main()
{
    char *s1 ="Bolatito";
    char *s2 = "Shorungbe";

    fun(s1, s2);
}

int fun(char *a, char *b)
{
    int la = 0, lb = 0, i = 0;

    while (a[i] != '\0')
    {
    la++;
    i++;
    }
    b[2]='2';

    printf("Length of string a = %d\n", la);
    printf("String b = %s\n", b);
}
