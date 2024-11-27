#include <stdio.h>

int main()
{

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("%d", n * n * n);
    }

    else if (n < 0)
    {
        printf("square of the number: %d", n * n);
    }

    return 0;
}