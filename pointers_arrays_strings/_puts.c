#include<stdio.h>

int _strlen(char *s);
void puts_half(char *str);
void _puts(char *str);
int main(void)
{
    char *str;

    str = "0123456789";
    _puts(str);
     puts_half(str);
    return (0);
}
int _strlen(char *s)
{
    int l = 0;

    while(s[l] != '\0')
    {
        l++;
    }
    printf("length of string = %d\n", l);
    return (l);
}
void _puts(char *str)
{
int i = 0;
    while(str[i] != '\0')
    {
putchar(str[i]);
    i++;
    }
    putchar('\n');
}

void puts_half(char *str)
{
int len = _strlen(str);
 int len2 = len / 2;
int i = len2;

if (len % 2 == 0)
{
while (str[i] != '\0')
{
     putchar(str[i]);
    i++;
}
}
else
{
    i = len2 + 1;
   while (str[i] != '\0')
{
     putchar(str[i]);
    i++;
} 
}
}
