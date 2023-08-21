#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints n times table, starting with 0
 */

void print_times_table(int n)
{
int row, col;

if (n > 15 || n < 0)
{
    return;
}

for (row = 0; row <= n; row++ )
{
    for (col = 0; col <= n; col++)
    {
        printf("%3d", col * row);
        if (col < n)
        {
            printf(", ");
        }
    }
    printf("\n");
}
}
