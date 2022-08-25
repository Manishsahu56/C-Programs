#include <stdio.h>
void armstrong(int);
void main()
{
  int n;
  printf("Enter any number: ");
  scanf("%ld", &n);
  armstrong(n);
}
void armstrong(int a)
{
  int c, s = 0, d;
  c = a;
  while(a != 0	)
  {
    d = a % 10;
    s = s + (d * d * d);
    a = a / 10;
  }
  if (s == c)
  {
    printf("Armstrong number.");
  }
  else
  {
    printf("Not armstrong number.");
  }
}
