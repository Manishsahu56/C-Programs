#include <stdio.h>
struct Student
{
  int roll;
  char name[16];
  char address[30];
};
typedef struct Student studentStruct;
void main()
{
  studentStruct stud[10];
  int i;
  for(i = 0; i < 2; i++) // You can max value in loop
  {
    printf("Enter the roll number: ");
    fflush(stdin);
    scanf("%d", &stud[i].roll);
    printf("Enter the name: ");
    fflush(stdin);
    gets(stud[i].name);
    printf("Enter the address: ");
    fflush(stdin);
    gets(stud[i].address);
  }
  for(i = 0; i < 2; i++)  // You can max value in loop
  {
    printf("\n\nRoll number: ");
    printf("%d",stud[i].roll);
    printf("\nName: ");
    puts(stud[i].name);
    printf("Address: ");
    puts(stud[i].address);
  }
}
