#include <stdio.h>
main()
{
  int a, b;
  printf("Enter value for a: ");
  scanf("%d",&a);
  printf("Enter value for b: ");
  scanf("%d",&b );

  printf("\nAddition %d+%d=%d",a,b,a+b);
  printf("\nSubtraction %d-%d=%d",a,b,a-b);
  printf("\nMultiplication %dx%d=%d",a,b,a*b);
  printf("\nDivision %d/%d=%d",a,b,a/b);
}
