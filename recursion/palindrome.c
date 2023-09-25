#include<stdio.h>

int _palindrome(char *s, int i, int j);
int _strlen(char *s)
{
    int l = 0;

    while(s[l] != '\0')
    {
        l++;
    }
    return (l);
}
int is_palindrome(char *s)
{

    //int i, j;
    int len = _strlen(s);

    if (*s == 0)
    {
        return (1);
    }
//printf("len = %d\n", len);
// ITERATIVE METHOD
/*
    for (i = 0, j = len - 1; j > i; i++, j--)
    {
        if (s[i] != s[j])
        {
            return (0);
            
        }
    }
    */
    return (_palindrome(s, 0, len - 1));
}
int _palindrome(char *s, int i, int j)
{
    if (i >= j)
    {
        return (1);
    }
    if (s[i] != s[j])
    {
        return (0);
    }
    return (_palindrome(s, i + 1, j - 1));
}

int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}