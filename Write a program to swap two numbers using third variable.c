#include <stdio.h>
main()
{
  int a, b, c;
  printf("\nEnter values for a and b: ");
  scanf("%d%d",&a,&b);
  c=a;
  a=b;
  b=c;
  printf("\nBefore swap value of a=%d and b=%d", a, b);
  printf("\nAfter swap value of a=%d and b=%d", a, b);
}
