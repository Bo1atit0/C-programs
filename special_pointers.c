#include <stdio.h>
#include<stdlib.h>





















void main()
{
// Wild Pointers - Uninitislized pointers act as wild pointers, they point to any random memory location
// To fix Wild pointers: make pointer equal to NULL or Dynamically allocate memory and assign value to pointer

//Dynamically allocate memory.
int *ptr = (int *)malloc(sizeof(int));
*ptr = 5;
printf("ptr = %d", *ptr);

// Pointer equal to NULL.
int *p;
p = NULL;















// Dangling Pointers: when a variable that a pointer points to gets destroyed, the pointer
// becomes a dangling pointer

/*
int *ptr = f();
printf("%d\n", *ptr);
  */  

/* int *ptr;
{
    int a = 5;
    ptr = &a;
    printf("a = %d\n", *ptr);
} 
printf("a = %d\n", *ptr);
*/

   /* int *ptr = (int *)malloc(sizeof(int));
   *ptr = 5;

    printf("%d\n", *ptr);

    free(ptr);
    ptr = NULL;
printf("%d\n", *ptr); */



}
/*
int *f ()
{
   static int a = 5;
    return (&a);
}
 */