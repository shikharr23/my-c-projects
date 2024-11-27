#include <stdio.h>

int main()
{

    int r, a, length, breadth;

    printf("Enter radius of circle: ");
    scanf("%d", &r);

    printf("Enter length and breadth of rectangle:\n");
    scanf("%d %d", &length, &breadth);

    printf("Enter side of the square: ");
    scanf("%d", &a);

    printf("\nThe area of the circle is %.2f", 3.14 * r * r);
    printf("\nThe perimeter of the circle is %.2f", 2*3.14*r);

    printf("\nThe area of the rectangle is %d", length * breadth);
    printf("\nThe perimeter of the rectangle is %d", 2 * (length + breadth));

    printf("\nThe area of the square is %d", a * a);
    printf("\nThe perimeter of the square is %d", 4 * a);

    return 0;
}