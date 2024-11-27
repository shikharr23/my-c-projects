// WAP to count the number of digits in a given number using built in function

// #include <stdio.h>
// #include <math.h>

// int main()
// {

//     int num;
//     printf("Enter number: ");
//     scanf("%d", &num);

//     int digits = (int)log10(num) + 1;
//     printf("Number of digits are %d", digits);
//     return 0;
// }

// C/C++ EXTENSION PACK

// without using buily in function

#include <stdio.h>

int main(){
    
    int num,count=0;
    printf("Enter number: ");
    scanf("%d", &num);

    while (num!=0)
    {
        num=num/10;
        count++;
    }
    
    printf("The count of the digits is %d", count);


    return 0;
}