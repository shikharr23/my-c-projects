// WAP to perform the sum of each rows and columns in 2D arrays
#include <stdio.h>

int main()
{

    int rows, columns;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of coumns: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Enter elements of array: ");

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

  

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < columns; j++)
        {
            sum += arr[i][j];
        }

        printf("Sum of %d row is %d\n", i, sum);
    }

    

    for (int i = 0; i < columns; i++)
    {

        int sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum += arr[j][i];
        }

        printf("Sum of %d column is %d\n", i, sum);
    }

    return 0;
}