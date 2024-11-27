#include <stdio.h>

int main()
{

    int size;
    printf("Enter size of arrays: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elemrnts in reverse order: ");
    
    for (int i = size - 1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    

    return 0;
}