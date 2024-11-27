#include <stdio.h>

int main()
{

    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You can vote");

    else
        printf("You cannot vote");

    return 0;
}