#include<stdio.h>

int _strlen(char *s);
int main(void)
{
    char *str;
    int len, len2;

    str = "bola";
    len = _strlen(str);
    len2 = strlen(str);
    printf("%d\n", len);
    printf("%d\n", len);
    return (0);
}

int _strlen(char *s)
{
    int l = 0;

    while(s[l] != '\0')
    {
        l++;
    }
    return (l);
}