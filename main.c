#include <stdio.h>

int main()
{
  int a, b, t;
  printf("Enter the first number:");
  scanf("%d", &a);
  printf("Enter the second number:");
  scanf("%d", &b);
  t = a;
  a = b;
  b = t;
  printf("After swapping the first value: %d\n", a);
  printf("After swapping the second value: %d\n", b);
  
  return 0;
}
