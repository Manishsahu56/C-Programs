#include <stdio.h>
void swap(int*, int*);
void main()
{
  int a = 10, b = 20;
  printf("Before swapping a = %d, b = %d", a, b);
  swap(&a, &b);
  printf("\nAfter swapping a = %d, b = %d", a, b);
}
void swap(int *a, int *b)
{
  *a = *a + *b;
  *b = *a - *b;
  *a = *a - *b;
}
