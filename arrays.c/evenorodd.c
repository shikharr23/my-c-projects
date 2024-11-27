#include <stdio.h>

int main()
{

    int size, even_count = 0, odd_count = 0;

    printf("Enter size of arrays: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("\nEven elements are: %d ", even_count);
    printf("\nOdd elements are: %d ", odd_count);

    return 0;
}