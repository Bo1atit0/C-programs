#include <stdio.h>

int _strlen_recursion(char *s)
{
     static int l = 0;

    if (s[0] == '\0')
    {
        return (l);
    }
     l++;
   _strlen_recursion(s + 1);
return (l);

}

int main(void)
{
    int n;

    n = _strlen_recursion("bola");
    printf("%d\n", n);
    return (0);
}