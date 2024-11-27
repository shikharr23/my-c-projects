#include <stdio.h>

int main(){

    float  celcius, temp;

    printf("Enter the temp in Fahrenhiet: ");
    scanf("%f", &temp);

    celcius = ((temp-32)*5)/9;

    printf("The temp in celcius is %.2f", celcius);


    return 0;
}



