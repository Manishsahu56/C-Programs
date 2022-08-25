#include <stdio.h>
#include <ctype.h>
main()
{
  int i, v = 0, c = 0 , sc = 0;
  char  s[20];
  printf("Enter the string: ");
  gets(s);
  for(i = 0; s[i] != '\0'; i++)
  {
    if(isalpha(s[i]))
    {
      if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o' || s[i]=='u')
      {
        v++;
      }
      else
      {
        c++;
      }
    }
    else
    {
      sc++;
    }
  }
  printf("\nNumber of Vowels are %d", v);
  printf("\nNumber of Consonants are %d", c);
  printf("\nNumber of Special Characters are %d", sc);
}
