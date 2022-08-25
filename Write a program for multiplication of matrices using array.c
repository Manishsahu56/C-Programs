#include <stdio.h>
main()
{
  int i, j, rowA, colA, rowB, colB, k;
  int a[20][20], b[20][20], mul[20][20];
  printf("Enter number of rows for Matrix A:");
  scanf("%d", &rowA);
  printf("Enter number of columns for Matrix A:");
  scanf("%d", &colA);
  printf("Enter number of rows for Matrix B:");
  scanf("%d", &rowB);
  printf("Enter number of columns for Matrix B:");
  scanf("%d", &colB);
  if (colA != rowB)
  {
    printf("Matrix Multiplication Not Possible.");
  }
  else
  {
    printf("Enter Matrix A: ");
    for(i = 0; i < rowA; i++)
    {
      for(j = 0; j < colA; j++)
      {
        scanf("%d", &a[i][j]);
      }
    }
    printf("Enter Matrix B: ");
    for(i = 0; i < rowB; i++)
    {
      for(j = 0; j < colB; j++)
      {
        scanf("%d", &b[i][j]);
      }
    }
    printf("Multiplication of two Matrices=\n");
    for(i = 0; i < rowA; i++)
    {
      for(j = 0; j < colB; j++)
      {
        mul[i][j] = 0;
        for(k = 0; k <rowB; k++  )
        {
          mul[i][j] = mul[i][j] + (a[i][k]*b[k][j]);
        }
        printf("%4d", mul[i][j]);
      }
      printf("\n");
    }
  }
}
