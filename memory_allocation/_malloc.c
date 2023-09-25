#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr;

    printf("Enter total number of values: ");
    scanf ("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));

printf("Enter values: ");
for (i = 0; i < n; i++)
{
    scanf("%d", (ptr + i));
}
    printf("Print Values\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }

printf("\nEnter modified total number of values :");
scanf ("%d", &n);

ptr = (int*)realloc(ptr, n * sizeof(int));

printf("Print Values after realloc\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\n", *(ptr + i));
    }

    printf("Enter values after realloc: ");
for (i = 0; i < n; i++)
{
    scanf("%d", (ptr + i));
}
    printf("Print Values after realloc\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\n", *(ptr + i));
    }

}