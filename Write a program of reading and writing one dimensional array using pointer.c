#include <stdio.h>
void main()
{
  int a[10], i, n = 10;
  int *temp;
  printf("Enter array elements: ");
  for(i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  temp = &a[0];
  printf("\nOutput of array elements");
  for(i = 0; i < n; i++)
  {
    printf("\n%d",*(temp + i));
  }
}
