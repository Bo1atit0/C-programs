#include <stdio.h>
#include <limits.h>

int main ()
{
    

    // declare a variable of type char, address of variable is created in memory -
    // - when variable is declared
char c;
// when you assign value to variable, it is stored in the address assigned
c = 'H';

// declare a pointer to a type char. The value of 'ptr' will - 
// - be a memory address holding a value of type char.
//the Type is 'pointer to a char'(because of the '*') NOT 'char

int *ptr;

// Print size of a Pointer
printf("Size of pointer = %lu\n", sizeof(ptr));

//Get address of ptr
printf("Address of pointer ptr = %p\n", &ptr);


// declare variable and pointer
int n;
int *p;
//Assign values to variable and pointer
n = 98;
p = &n;
// Address of variable 'n' is the value of pointer 'p'
printf("Address of variable n = %p\n", &n);
printf("Value of pointer p = %p\n", p);

//declare a variable of unsigned long int and int and try to store memory address in it -
// - instead of using a pointer.
// It worked but it gave errors because we were assigning -
// - a memory address to integers and not pointers
unsigned long int a = &n;
int b = &n;
printf("Address of 'n' stored in an unsigned long int variable 'a' = %p\n", a);
printf("Address on 'n' stored in an integer variable 'b' = &p\n", b);

//Dereferencing pointer p to change the value of int n
printf("Value of n = %d\n", n);
printf("Value of p = %p\n", p);
printf("Value of *p = %d\n", *p);
*p = 89;    //change value of variable 'n' by dereferncing pointer 'p'(p = &n)
printf("New value of n = %d\n", n);
printf("New value of *P = %d\n", *p);

printf("\n___________________________________\n\n");
// Print size of Types and get min to max value of integral types
printf("Size of a char = %d bytes\n", sizeof(char));
printf("Size of an int = %d bytes\n", sizeof(int));
printf("Size of a float = %d bytes\n", sizeof(float));
printf("Range of a CHAR = %d - %d \n", CHAR_MIN, CHAR_MAX);
printf("Size of unsigned long int = %lu bytes\n", sizeof(unsigned long int));

// get memory addresses of variables and pointers
printf("Address of pointer p = %p\n", &p);
printf("Address of char c = %p\n", &c);
printf("Address of int n = %p\n", &n);


//Void pointers

printf("VOID POINTERS\n");

int aa = 5;
float bb = 4;
char cc = 'o';
void *vp;

vp = &aa;
printf("dereferenced vp = %d\n", *(int*)vp);

vp = &bb;
printf("dereferenced vp = %f\n", *(float*)vp);

vp = &cc;
printf("dereferenced vp = %c\n", *(char*)vp);



}
