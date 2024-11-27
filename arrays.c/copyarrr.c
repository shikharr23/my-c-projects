#include <stdio.h>

int main(){
    
    int size;
    

    printf("Enter size of arrays: ");
    scanf("%d", &size);
    int arr1[size];
    int arr[size];
    printf("Enter elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++)
    {
        arr1[i] = arr[i];
    }

    printf("Elements of array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\nElements of 2nd array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }
    
   
    



    return 0;
}