#include <stdio.h>
#include "main.h"


void print_to_98(int n)
{

    
    if (n < 98)
    {
        for (; n <= 98; n++)
        {
            printf("%2d", n);
            if (n != 98)
            printf(", ");
        }
        printf("\n");
    }
    else
    {
        for (; n >= 98; n--)
        {
            printf("%2d", n);
            if (n != 98)
            printf(", ");
        }
        printf("\n");
    }
}
