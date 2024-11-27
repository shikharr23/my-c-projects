#include <stdio.h>
int main()
{
  int x;
  int y;

  printf("Enter first number: ");
  scanf("%d", &x);

  printf("Enter second number: ");
  scanf("%d", &y);

  printf("The sum of the numbers is %d", x + y);

  return 0;
}