
//  #include <stdio.h>
//  #include <stdlib.h>

//  int main(){

//     int pin;
//     abc:
//     printf("Enter your pin: ");
//     fflush(stdin);
//     int z = scanf("%d", &pin);

//     if(z==0)

//         goto abc;

//     printf("Your pin is %d", pin);

//     return 0;

//     }

// how to run both if and else using goto statement

#include <stdio.h>

int main()
{

    int pin;
    printf("Enter your pin: ");
    scanf("%d", &pin);

    if (pin > 999)
    {
        printf("It is valid\n");
        goto xyz; 
    }

    else
    {

    xyz:
        printf("It is not valid");
    }

    return 0;
}