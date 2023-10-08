#include "main.h"

/**
* create_array - function that creates an array of chars
* malloc - allocate memory
* @size: size of the array
* @c: elements of the array
*
* Return: a pointer to the first element of the  array
*/

char *create_array(unsigned int size, char c)
{
     unsigned int i;
     char *ptr;

    if (size == 0)
    {
        return (0);
    }
    ptr = (char*)malloc(size * sizeof(char));

    if (ptr == 0)
    {
        return (0);
    }
    for (i = 0; i < size; i++)
    {
        ptr[i] = c;
    }

    return (ptr);
}