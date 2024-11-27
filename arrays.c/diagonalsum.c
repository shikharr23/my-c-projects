#include <stdio.h>

int main(){
    
    int rows, columns,sum=0;

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

    
    for (int i = 0; i < rows; i++)   //to perform sum of diagonal we have to loop only for rows or columns as they are frequently changing
    {
        

        sum += arr[i][i];

    }
    
    printf("Sum of main diagonal is %d\n", sum);


    int sum2 = 0;
    for (int i = 0,j= columns-1; i < rows&&j>=0; i++,j--)
    {
        sum2+=arr[i][j];
    }
    
    printf("Sum of minor diagonal is %d\n", sum2);

    return 0;
}