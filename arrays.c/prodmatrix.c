#include <stdio.h>

int main()
{

    int rows, columns, rows1, columns1, i, j, k;
    printf("Enter number of rows and columns of matrix1: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter number of rows and columns of matrix2: ");
    scanf("%d %d", &rows1, &columns1);

    int arr1[rows][columns];
    printf("Enter elements of matrix1:\n ");
    for (i = 0; i < rows; i++)
    {

        for (j = 0; j < columns; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    int arr2[rows1][columns1];

    printf("Enter elements of matrix2:\n ");

    for (i = 0; i < rows1; i++)
    {

        for (j = 0; j < columns1; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    int product[rows][columns1];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns1; j++)
        {
            product[i][j] = 0;
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns1; j++)
        {
            for (k = 0; k < columns; k++)
            {
                product[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}