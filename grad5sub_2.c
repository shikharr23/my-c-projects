#include <stdio.h>

int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n / 10 == 0)
        printf("It is a one digit number.");
    else if (n / 100 == 0)
        printf("It is a two digit number.");
    else if (n / 1000 == 0)
        printf("It is a three digit number.");
    else
        printf("The number is more than three digit.");
    return 0;
}