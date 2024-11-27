#include <stdio.h>
#include<ctype.h>

int main(){
    
    char grade;

    printf("Enter the grade : ");
    
    scanf("%c", &grade);

    grade = toupper(grade);  //to convert lowercase to uppercase




    switch(grade){

        case 'A':
        printf("Excellent");
        break;

        case 'B':
        printf("Very good");
        break;

        case 'C':
        printf("Good");
        break;

        case 'D':
        printf("Need practice");
        break;

        case 'E':
        printf("Failed");
        break;


        default:
        printf("Enter valid character!");





    }






    return 0;
}