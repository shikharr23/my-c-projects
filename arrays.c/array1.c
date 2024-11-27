// WAP to read and display the elements of an array

#include <stdio.h>

int main()
{

    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements of arrays are: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


