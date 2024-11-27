// #include <stdio.h>
// #include <stdlib.h>

// void good_moring()
// {
//     printf("Hello World! Chai Pi Loo");
// }

// int main()
// {
//     system("cls");

//     good_moring();

//     return 0;
// }


#include <stdio.h>

//function prototype or function declaration

int sum(int a, int b);

//function definition

int sum(int a, int b)  
{
    printf("The sum is %d", a+b);
    return a + b;
}

int main(){
    
    int a,b;
    scanf("%d %d", &a, &b);

   sum(a,b); //function calling

    return 0;
}