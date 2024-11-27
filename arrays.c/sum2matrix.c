#include <stdio.h>

int main(){

    int rows,columns,matrix1,matrix2;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of coumns: ");
    scanf("%d", &columns);

    int arr1[rows][columns];

    printf("Enter elements of matrix1:\n ");

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    int arr2[rows][columns];

    printf("Enter elements of matrix2:\n ");

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    //for sum of matrices

    printf("Sum: \n");

    int sum =0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum = arr1[i][j] + arr2[i][j];
            printf("%d ", sum);
        }
    printf("\n");
       
        
    }
    
    
  

    
    return 0;
}