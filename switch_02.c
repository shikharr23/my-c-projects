
#include <stdio.h>

int main()
{
    float r, length, width, a, area;
    int choice;

    printf("\npress 1 for area of circle:");
    printf("\npress 2 for area of rectangle:");
    printf("\npress 3 for area of square:");
    printf("\nenter your choice: ");
    scanf("\n%d", &choice);

    switch (choice)
    {
    case 1:
        printf("enter the radius:");
        scanf("%f", &r);
        printf("area of circle is %.2f", 3.14 * r * r);
        break;

    case 2:
        printf("enter the length: ");
        scanf("%f", &length);
        printf("enter the width: ");
        scanf("%f", &width);
        printf("the area of rectangle is %.2f", length * width);
        break;

    case 3:

        printf("enter the a of square : ");
        scanf("%f", &a);
        printf("the area of square is %.2f", a * a);
        break;

    default:
        printf("SAHI CHOICE KA CHAYN KREIN!!");
        break;
    }

    return 0;
}