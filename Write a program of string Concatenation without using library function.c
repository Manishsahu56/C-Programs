#include <stdio.h>
main()
{
  int i, j = 0;
  char  s[100], s1[100], c[250];
  printf("Enter first string: ");
  gets(s);
  printf("Enter second string: ");
  gets(s1);
  for(i = 0; s[i] != '\0'; i++)
  {
    c[j++] = s[i];
  }
  for(i = 0; s1[i] != '\0'; i++)
  {
    c[j++] = s1[i];
  }
  c[j]='\0';
  nbsp;printf("String Concatenation = %s", c);
}
