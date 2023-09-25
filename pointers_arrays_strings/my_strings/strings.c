#include <stdio.h>

int main()
{
 //   char name[] = "1,2,3,4,5,6,7,8,9,10";
//char a[] = {'B','o','l','a','t','i','t','o','\0'};
char surnname [30] = "Bolatito Shorungbe";

//printf("Enter your surnname:");

//gets(surnname);
    //scanf("%s", surnname);
    printf("%s\n", &surnname[5]);
    //printf("%.5s\n", surnname);
    //printf("%10.5s\n", surnname);
  //  puts(surnname);
putchar(surnname + '0');
   // printf("%s\n", name);
    //printf(" %s\n", a);
}