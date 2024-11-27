#include <stdio.h>

int main(){

    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if((ch>=65&&ch<=90)|| (ch>=97&&ch<=122)){
        printf("It is an alphabet");
    }

    else{
        printf("It is not  an alphabet");
    }
    return 0;
}




/*
ASCAII VALUE

A to Z: 65-90
a to z: 97-122
0 to 9: 48-57
space : 32


*/