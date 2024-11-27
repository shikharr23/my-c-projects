
#include <stdio.h>

int main(){
    
    int x, y, temp;

    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);

    printf("The value of x and y before swapping is %d and %d", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("\nThe value of x and y after swapping is %d and %d", x, y);

    return 0;
}   