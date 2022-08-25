#include <stdio.h>
int factorial(int);
void main()
{
  int n, f;
  printf("Enter any number: ");
  scanf("%d", &n);
  f = factorial(n);
  printf("Factorial of %d is %d ", n, f);
}
int factorial(int n)
{
  int i, f = 1;
  for(i = n; i >= 1; i--)
  {
    f = f * i;
  }
  return f;
}
