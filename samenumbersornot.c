#include <stdio.h>

int main(){
    int x, y;

    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);


    if(x == y){
        printf("The numbers are same!");
    }

    else if(x > y)
    {
        printf("The greater number is %d", x);
    }

    else if(x < y)
    {
        printf("The greater number is %d", y);
    }

    return 0;
}