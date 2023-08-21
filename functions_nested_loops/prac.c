#include <stdio.h>

void main()
{
    int i, j, n, m = 120;

    for (i=1; i<=m; i++)
    {
        for (j=i; j<=i; j++)
        {
            for (n=1; n<=i; n++)
            {
                printf("%d", n);
            }
            printf("\n");
        }
    }
}