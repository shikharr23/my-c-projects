// #include <stdio.h>
// #include <math.h>

// int main(){
//         int n, sum = 0;
//         printf("Enter n: ");
//         scanf("%d", &n);

//         for (int i = 0; i <=n; i++)
//         {
//             sum += i;
//         }
        
//         printf("%d", sum);

//     return 0;
// }


//factorial of a given number

#include <stdio.h>
#include <math.h>

int main(){

    int n, fact=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        fact *= i;
        
    }
    
     printf("%d", fact);
   
    
    return 0;
}