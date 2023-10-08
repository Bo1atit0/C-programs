#include "main.h"


int **alloc_grid(int width, int height)
{
    int **ptrp;
    int i, j;

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }

    ptrp = (int **)malloc(width * sizeof(int*));
    if (ptrp == NULL)
    {
        return (0);
    }
    
    for (i = 0; i < width; i++)
    {
        ptrp[i] = (int*)malloc(height * sizeof(int));
        if (ptrp[i] == NULL)
    {
        return (0);
    }
    }
    
    
    for (i = 0; i < width; i++)
    {
        for (j = 0; j < height; j++)
        {
            ptrp[i][j] = 0;
        }
    }
    return (ptrp);
}