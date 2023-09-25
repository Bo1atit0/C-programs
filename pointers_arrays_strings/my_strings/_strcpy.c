#include<stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src);
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}

/**
 * _strcpy - a function that copies the string pointed to by src,
 *  including the terminating null byte (\0), to the buffer pointed to by dest.
 * 
 * Return - pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
    dest[i] = src[i];
}
dest[i] = '\0';

return(dest);
}