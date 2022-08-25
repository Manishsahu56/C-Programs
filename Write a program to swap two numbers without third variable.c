#include <stdio.h>
main()
{
  int a, b;
  printf("\nEnter values for a and b: ");
  scanf("%d%d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\nBefore swapping value of a=%d b=%d", a, b);
  printf("\nAfter swapping value of a=%d and b=%d", a, b);
}
