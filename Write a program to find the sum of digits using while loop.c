#include <stdio.h>
main()
{
  long int n, d, m;
  long int sum = 0;
  printf("Enter a number: ");
  scanf("%ld", &n);
  m = n;
  while(n != 0);
  {
    d = n % 10;
    sum = sum  + d;
    n = n / 10;
  }
  printf("Sum of digits of %ld = %ld", m, sum);
}
