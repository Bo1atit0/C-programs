#include<stdio.h>

/**
 * main - program that reads an array of 10 integers and counts the number of even and odd numbers
 * 
 */

void main()
{

int arr1 [5], arr2[5], sumArr[5], i;

printf("enter elements of arr1:");
for (i = 0; i < 5; i++)
{
  scanf("%d", &arr1[i]);
printf("enter elements of arr2:");
scanf("%d", &arr2[i]);
}
for (i = 0; i < 5; i++)
{
  sumArr[i] = arr1[i] + arr2[i];
  
}
for (i = 0; i < 5; i++)
printf("sumArr[%d] = %d\n", i, sumArr[i]);
}