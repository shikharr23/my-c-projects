// WAP to perform the swap the first and last digit of the number

#include <stdio.h>
#include <math.h>

int main()
{

    int num, sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    int digit = (int)log10(num) + 1;

    int last_digit = num % 10;

    int first_digit = num / pow(10, digit - 1);

    sum = last_digit+first_digit;
   
   
    printf("sum = %d", sum);
    

    return 0;
}


