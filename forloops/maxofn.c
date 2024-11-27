#include <stdio.h>

int main(){
    
    int n,x=0,max=0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d numbers\n", n);

    for (int  i = 1; i <=n; i++)
    {
        printf("Enter %d number:  ", i);
        scanf(" %d", &x);

        if(max<x) max = x;
    }

    printf("Maximum number: %d", max);
    

    return 0;
}