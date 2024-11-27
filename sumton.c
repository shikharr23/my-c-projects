#include <stdio.h>

int main(){

    int n, i = 1;
    int sum = 0;

        printf("Enter n: ");
        scanf("%d", &n);

    do
    {
        sum += i;
        i++;
    } while (i<=n);
    

    printf("The sum  is %d", sum);

    return 0;
}

//another formula: (n*(n+1))/2;