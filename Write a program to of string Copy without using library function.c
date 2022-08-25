#include <stdio.h>
main()
{
  int i;
  char  s[100], c[100];
  printf("Enter the string: ");
  gets(s);
  for(i = 0; s[i] != '\0'; i++)
  {
    c[i] = s[i];
  }
  c[i]='\0';
  printf("Copied string is %s", c);
}
