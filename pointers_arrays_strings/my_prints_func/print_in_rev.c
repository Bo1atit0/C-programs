#include<stdio.h>

void print_rev(char *s);
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}

void print_rev(char *s)
{
    int l = 0, i;

    while(s[l] != '\0')
    {
        l++;
    }

    for(i = l-1; i>=0; i--)
    {
        putchar(s[i]);
    }
    putchar('\n');
}