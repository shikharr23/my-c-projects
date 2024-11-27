

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Using NOT operator to check if age is not greater than 18
    if (!(age > 18)) {
        printf("You can drive.\n");
    } else {
        printf("You cannot drive.\n");
    }

    return 0;
}
