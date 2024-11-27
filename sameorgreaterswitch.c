#include <stdio.h>

int main(){
    
    int x, y;

    printf("Enter two integers:\n");
    scanf("%d %d", &x, &y);

    switch(x == y){

        case 1:
        printf("Both the numbers are same");
        break;

        case 0:
        if (x > y){
            printf("x is greater than y", x);
        }
        else {
            printf("y is greater than x", y);
        }


    }


    return 0;
}