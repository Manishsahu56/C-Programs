#include <stdio.h>
void main()
{
  int a[10][10];
  int i, j, row = 3, col = 3;
  printf("Enter array elements: ");
  for(i = 0; i < row; i++)
  {
    for(j = 0; j < col; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Output of array elements\n");
  for(i = 0; i < row; i++)
  {
    for(j = 0; j < col; j++)
    {
      printf("%d  ", *(*(a + i) + j));
    }
    printf("\n");
  }
}
