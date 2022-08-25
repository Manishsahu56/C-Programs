#include <stdio.h>
long int calculatePower(int, int) ;
void main()
{
  int base, power;
  long int result;
  printf("Enter base and power values: ");
  scanf("%d%d",&base, &power);
  result = calculatePower(base, power);
  printf("\n%d^%d = %ld",base, power, result);
}
long int calculatePower(int base, int power)
{
  long int i, result=1;
  for(i = 1; i <= power; i++)
  {
    result = result * base;
  }
  return result;
}
