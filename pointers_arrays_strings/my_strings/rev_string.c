#include<stdio.h>

void rev_string(char *s);
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}


void rev_string(char *s)
{
    int l = 0, i, j;
char temp;

    while(s[l] != '\0')
    {
        l++;
    }

    for(i = 0, j = l-1; i<j; i++, j--)
    {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}
}