#include <stdio.h>
main()
{
  int i = 0;
  char s[50], c;
  printf("Enter the string: ");
  c = getchar();
  while(c != '\n')
  {
    s[i++] = c;
    c = getchar();
  }
  s[i]='\0';
  printf("\nEntered String: ");
  i = 0;
  while(c != '\n')
  {
    putchar(s[i]);
    i++;
  }
}
