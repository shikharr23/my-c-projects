#include <stdio.h>
int main()
{
  int length;
  int width;

  printf("Enter length of the rectangle: ");
  scanf("%d", &length);

  printf("Enter length of the width: ");
  scanf("%d", &width);

  printf("The area of the rectangle is: %d", length * width);

  return 0;
}