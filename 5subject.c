#include <stdio.h>

int main()
{

    int sub1, sub2, sub3, sub4, sub5;
    int total_marks;
    float  percentage;

    printf("Enter marks of sub1: ");
    scanf("%d", &sub1);
    printf("Enter marks of sub2: ");
    scanf("%d", &sub2);
    printf("Enter marks of sub3: ");
    scanf("%d", &sub3);
    printf("Enter marks of sub4: ");
    scanf("%d", &sub4);
    printf("Enter marks of sub5: ");
    scanf("%d", &sub5);

    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("\nTotal marks of the student is %d", total_marks);

    percentage = (sub1 + sub2 + sub3 + sub4 + sub5)/5;

    printf("\nThe percentage of the student is %.2f", percentage);

    return 0;
}