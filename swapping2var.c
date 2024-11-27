#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter two integers\n");
    scanf("%d %d", &x, &y);

    printf("The value of x and y before swapping is %d and %d", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("\nThe values of x and y after swapping is %d and %d", x, y);

    return 0;
}