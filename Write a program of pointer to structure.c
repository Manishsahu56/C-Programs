#include <stdio.h>
struct Employee
{
  int empNo;
  char empName[16];
};
void main()
{
  struct Employee emp, *ptr;
  ptr = &emp;
  printf("Enter employee no: ");
  scanf("%d", &ptr->empNo);
  printf("Enter employee name: ");
  scanf("%s", &ptr->empName);
  printf("\nEmployee No: %d", ptr->empNo);
  printf("\nEmployee Name: %s", ptr->empName);
}
