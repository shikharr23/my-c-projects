#include <stdio.h>

int main()
{

    int x;
    printf("Enter x: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
    {
        if (i % 5 == 0 && i % 7 == 0)
        break;
        printf("%d ", i);
    }

    return 0;
}