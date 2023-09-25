#include<stdio.h>

 const char *display();
void main()
{
    const char *str;
    str = display();
   printf("String is  %s\n", str);
   // str[0] = 's';
    //printf("modified string is %s\n", str);
}

const char *display()
{
const char *str = "name";
return (str);
}