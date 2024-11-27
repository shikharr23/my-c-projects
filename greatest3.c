//GREATEST NUMBER AMONNG THREE

#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Enter a,y,z:\n ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("a is the greatest");
    else if (b > c)
        printf("b is the greatest");
    else
        printf("c is the greatest");

    return 0;
}