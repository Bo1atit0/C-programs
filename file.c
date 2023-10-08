#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
   

    FILE *fp = NULL;
    FILE *fpr = NULL;
    
char ch;
char str[50];
 //Write Into a File.
/*
    fp = fopen("abc.txt", "w");
    if (fp == NULL)
    {
        printf ("No file");
    }
    //fputc(c, fp);
    fputs(str, fp);
//fprintf (fp, "%d\n %s\n %c\n", a, str, c);
*/

//Read From A File
fpr = fopen("abc.txt", "r");
if (fpr == NULL)
{
    printf("ERROR");
    exit(1);
}
while ((ch = fgetc(fpr)) != EOF)
{
printf("%c", ch);
}
fclose(fpr);
}