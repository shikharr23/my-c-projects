//WAP to print all aphabets from a to z



#include <stdio.h>

int main(){

    for (char ch = 'a'; ch>=97&&ch<=122; ch++)
    {
        printf("%c ", ch);
    }
    
    return 0;
}