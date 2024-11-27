//WAP TO TELL A NUMBER I SINGLE, TWO DIGIT, THREE DIGIT, OR MORE

#include <stdio.h>

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n>=0 && n<=9) printf("Number is 1 digit");
    else if(n>=10 && n<=99) printf("Number is 2 digit");
    else if(n>=100 && n<=999) printf("Number is three digit");
    else printf("Number is 4 or more digit");

    return 0;
}