#include <stdio.h>
#include <math.h>

int main()
{

    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    int digit = (int)log10(num) + 1;

    int first_digit = num / pow(10, digit - 1);

    num = num % (int)pow(10, digit - 1);

    int last_digit = num % 10;

    num = num / 10;

    num = last_digit * pow(10, digit - 1) + num * 10 + first_digit;

    printf("%d", num);

    return 0;
}