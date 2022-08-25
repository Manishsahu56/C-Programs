#include <stdio.h>
main()
{
  int a, b;
  printf("Please enter the value of a and b: ");
  scanf("%d%d",&a, &b);
  if (a > b)
  {
    printf("%d is greater.", a);
  }
  if (b > a)
  {
    printf("%d is greater.", b);
  }
  if (a == b)
  {
    printf("%d and %d are equal.", a, b);
  }
}
