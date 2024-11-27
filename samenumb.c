#include <stdio.h>

int main(){

    int x, y;

    printf("Enter two integers\n");
    scanf("%d %d", &x, &y);

    if(x == y) printf("Both the numbers are same");

    else if(x > y) printf("x is greater being %d", x);

    else{
        printf("y is greater being %d", y);
    }



    return 0;
}