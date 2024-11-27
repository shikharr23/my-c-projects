#include <stdio.h>
#include <math.h>

int main()
{

    float x1, y1, x2, y2, distance;

    printf("Enter x-coordinate of the first point: ");
    scanf("%f", &x1);

    printf("\nEnter x-coordinate of the second point: ");
    scanf("%f", &x2);

    printf("\nEnter y-coordinate of the first point: ");
    scanf("%f", &y1);

    printf("\nEnter y-coordinate of the second point: ");
    scanf("%f", &y2);

    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("\nThe euclidean distance is %.2f", distance);

    return 0;
}