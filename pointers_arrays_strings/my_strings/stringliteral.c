#include<stdio.h>

int main()
{
char *s2 = "abcdef";  //string literal
s2++;
printf("s2 = %s\n", s2);
char s1[] = "abcdef"; //character array, can be modified
printf("s1 = %s\n", s1);

s2 = "new string";
printf("s2 = %s\n", s2);

printf("sizeof(s1) : %d\n", sizeof(s1));
printf("sizeof(s2) : %d\n", sizeof(s2));

}