#include <stdio.h>
main()
{
  int a;
  printf("Please enter values for a: ");
  scanf("%d",&a);

  printf("\nValue of a pre increment: %d", ++a);
  printf("\nValue after post increment: %d", a);
  printf("\nValue of a post increment: %d", a++);
  printf("\nValue after post increment: %d" ,a);
  printf("\nValue of a pre decrement: %d", --a);
  printf("\nValue after pre decrement: %d", a);
  printf("\nValue post of post decrement: %d", a--);
  printf("\nValue after post decrement: %d", a);
}
