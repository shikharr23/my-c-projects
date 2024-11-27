#include <stdio.h>

int main(){

  int rows, columns,i,j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of coumns: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Enter elements of array:\n ");

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //transpose of a matrix

    int transpose[columns][rows];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            transpose[j][i] = arr[i][j];
        }
        
    }

    printf("Transpose of the matrix:\n");

    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        
        printf("\n");
    }
    

    

   
    

    return 0;
}