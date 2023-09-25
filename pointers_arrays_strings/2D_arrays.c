#include <stdio.h>
#define N 50

/**
 *  main - create a 2d array, initialize, print, sum and transpose  the elements
 * 
*/

int main()
{
    int i, j, k, mul;
    int m, n, p, q, a[N][N], b[N][N], c[N][N];

   //Initialize Matrices at run time
    printf("enter size of first matrix:");
            scanf("%d %d", &m, &n);
    
    printf("Enter elements of first matrix:");
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d, %d", &a[i][j]);
            }
             
    }
  //Second Matrix

  printf("enter size of second matrix:");
            scanf("%d %d", &p, &q);
    
    printf("Enter elements of second matrix:");
    for (i=0; i<p; i++)
    {
        for (j=0; j<q; j++)
        {
            scanf("%d, %d", &b[i][j]);
            }
             }

             //Print Matrices

             printf("First Matrix:\n");
             for (i=0; i<m; i++)
             {
                for (j=0; j<n; j++)
                {
                    printf("%d\t", a[i][j]);
                }
                printf("\n");
             }         
   printf("Second Matrix:\n");
             for (i=0; i<p; i++)
             {
                for (j=0; j<q; j++)
                {
                    printf("%d\t", b[i][j]);
                }
                printf("\n");
             }    

             //Transpose Matrix A
             printf("\nTranspose Matrix\n");
for (i=0; i<n; i++)
{
    for (j=0; j<m; j++)
    {
        printf("%d\t", a[j][i]);
    }
    printf("\n");
}

// Add Matrix A and B
printf("Sum of 2 matrices is:\n");
if (m != p || n != q)
{
    printf("Cannot Add Matrices\n\n");
}
else
for (i=0; i<m; i++)
{
    for(j=0; j<n; j++)
    {
c[i][j] = a[i][j] + b[i][j]; 
printf("%d\t", c[i][j]);
    }
    printf("\n");
}

// print diagonal of Matrices
printf("Diagonal of Matrix:\n");
for (i=0; i<m; i++)
{
    for (j=0; j<n; j++)
    {
        if (i==j)
        printf ("%d", a[i][j]);
        else
        printf("\t");
    }
    printf("\n");
}

//Multiply 2 matrices
printf("Multiplication of 2 matrices:\n");
if (m != q)
{
printf("Cannot Multiply\n");
}
else
for (i=0; i<m; i++)
{
    for (j=0; j<q; j++)
    {
        mul = 0;
        for (k=0; k<m; k++)
        {
            mul = mul + (a[i][k]*b[k][j]);
        }
        c[i][j] = mul;
        printf ("%d\t", c[i][j]);
    }
   printf("\n");
}
}
