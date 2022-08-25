#include <stdio.h>
int factorial(int);
void main()
{
  int n;
  printf("Enter any number: ");
  scanf("%d", &n);
  printf("Factorial of %d is %d", n, factorial(n));
}
int factorial(int n)
{
  if(n == 0)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}
