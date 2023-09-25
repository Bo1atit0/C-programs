
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s);
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}

int _strlen(char *s)
{
 int i, count = 0;

for (i=s[0]; i<'\0'; i++);
{
count++;
}
return(count);
}