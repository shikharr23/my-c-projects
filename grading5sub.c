//GRADING SYSTEM FOR 5 SUBJECTS

#include <stdio.h>

int main()
{

    int sub1, sub2, sub3, sub4, sub5, sum, avg;

    printf("Enter marks of 5 subjects: \n");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    printf("The average is: %d\n", avg);

    if (avg >= 90)
        printf("A+");
    else if (avg >= 80 && avg < 90)
        printf("A");
    else if (avg >= 70 && avg < 80)
        printf("B+");
    else if (avg >= 60 && avg < 70)
        printf("B");
    else if (avg >= 50 && avg < 60)
        printf("C");
    else
        printf("Fail");

    return 0;
}