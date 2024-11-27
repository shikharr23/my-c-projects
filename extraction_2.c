#include <stdio.h>

int main()
{
    int a, b, c, d, e;

    int n;

    printf("Enter the 5 digit number: ");
    scanf("%d", &n);

    a = n % 10;
    //  printf("%d\n", a);

    n = n / 10;
    // printf("%d\n", n);

    b = n % 10;
    //  printf("%d\n", b);

    n = n / 10;
    // printf("%d\n", n);

    c = n % 10;
    //  printf("%d\n", c);

    n = n / 10;
    // printf("%d\n", n);

    d = n%10;
    //  printf("%d\n", d);

    n = n/10;
    // printf("%d\n", n);

    e = n%10;
    // printf("%d\n", e);

    n = n/10;

    printf("The sum of the numbers is %d", a+b+c+d+e);

    return 0;
}