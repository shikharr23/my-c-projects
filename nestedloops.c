// #include <stdio.h>

// int main()
// {

//     int n, i;
//     printf("Enter n: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d ", i);
//         }

//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){

//     int i=2,n;
//     printf("Enter n: ");
//     scanf("%d", &n);

//     while (i<=n)
// {
//     if (i%2==0)
//     {
//        printf("%d ", i);
//     }
//     i++;
// }

// return 0;

// }

// nested loops

// #include <stdio.h>

// int main()
// {

//     int i, j;

//     for (i = 0; i < 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             printf("* ", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(){

//     int i,j;

//     for ( i = 1; i <=5; i++)

//         {
//         for ( j = 1; j <=5; j++)
//         {
//             if (i==1 || i==5 || j==1 || j==5)
//             {
//                 printf("~ ",j);
//             }

//             else{
//                 printf("  ");
//             }

//         }

//         printf("\n");

// }

//     return 0;
// }

// #include <stdio.h>

// int main(){

//     int i,j,n;

//     printf("Enter n: ");
//     scanf("%d", &n);

//     for ( i = 1; i <=n; i++)

//         {
//         for ( j = 1; j <=n; j++)
//         {
//             if (i==1 || i==n || j==1 || j==n)
//             {
//                 printf("~ ",j);
//             }

//             else{
//                 printf("  ");
//             }

//         }

//         printf("\n");

// }

//     return 0;
// }

int main()
{

    int i, j,n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if ( i==n || j==1 || i==j)
            {
              printf("* ",j);
            }

            else{
                printf("  ");
            }

        }
        printf("\n");
    }

    return 0;
}


// #include <stdio.h>

// int main()
// {

//     int i, j, n;
//     scanf("%d", &n);

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j <= i; j++)
//         {
//             printf("* ", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }