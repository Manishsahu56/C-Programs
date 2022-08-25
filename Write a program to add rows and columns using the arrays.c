#include <stdio.h>
main()
{
  int i, j, row, col;
  int a[10][10], rowSum, colSum;
  printf("Enter the number of rows: ");
  scanf("%d", &row);
  printf("Enter the number of columns: ");
  scanf("%d", &col);
  printf("Enter Matrix Elements: ");
  for(i = 0; i < row; i++)
  {
    for(j = 0; j < col; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  for(i = 0; i < row; i++)
  {
    rowSum = 0;
    for(j = 0; j < col; j++)
    {
      rowSum = rowSum + a[i][j];
    }
    printf("\nSum of row %d is = %d", i + 1, rowSum);
  }
  for(j = 0; j < col; j++)
  {
    colSum = 0;
    for(i = 0; i < row; i++)
    {
      colSum = colSum + a[i][j];
    }
    printf("\nSum of column %d is = %d", j + 1, colSum);
  }
}
