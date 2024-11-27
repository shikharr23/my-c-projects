#include <stdio.h>

int main()
{

    int i, size, to_search, flag=0;
    printf("Enter size of arrays: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element to be searched: ");
    scanf("%d", &to_search);

    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == to_search)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("\n%d is found at %d", to_search, i);
    }
    else
    {
        printf("\n%d is not found", to_search);
    }

    return 0;
}