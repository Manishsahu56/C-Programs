#include <stdio.h>
main()
{
  int a, b;
  printf("Please enter values for a and b: ");
  scanf("%d%d",&a,&b);
  (a>b)?printf("%d is greater.", a):printf("%d is greater.", b);
}
