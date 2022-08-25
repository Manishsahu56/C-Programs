#include <stdio.h>
struct Student
{
  int roll;
  char name[16];
  char address[30];
};
typedef struct Student studentStruct;
studentStruct receive(studentStruct stud);
void main()
{
  studentStruct stud;;
  stud = receive(stud);
  printf("\n\nRoll number: ");
  printf("%d",stud.roll);
  printf("\nName: ");
  puts(stud.name);
  printf("Address: ");
  puts(stud.address);
}
studentStruct receive(studentStruct stud)
{
  printf("Enter the roll number: ");
  fflush(stdin);
  scanf("%d", &stud.roll);
  printf("Enter the name: ");
  fflush(stdin);
  gets(stud.name);
  printf("Enter the address: ");
  fflush(stdin);
  gets(stud.address);
  return stud;
}
