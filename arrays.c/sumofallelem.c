#include <stdio.h>

int main(){

    int size,c, sum=0;
    printf("Enter size of arrays: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sum of elemets is: ");
    for (int i = 0; i < size; i++)
    {

       sum = sum+arr[i];
    }

    printf("%d", sum);
    

    return 0;
}