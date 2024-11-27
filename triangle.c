 #include <stdio.h>
 int main()
 {
    int height;
    int base;

    printf("The height of the triangle is: ");
    scanf("%d", &height);

    printf("The base of the triangle is: ");
    scanf("%d", &base);

    printf("The area of the triangle is: %f", 0.5 * height * base);


      return 0;
 }