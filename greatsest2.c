#include <stdio.h>

int main(){

    int a,b;

    printf("Enter and b:\n");
    scanf("%d %d", &a, &b);

    if(a>b) printf("a is the greatest");
    else printf("b is the greatest");


    return 0;
}