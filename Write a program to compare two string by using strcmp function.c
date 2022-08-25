#include <stdio.h>
#include <string.h>
main()
{
  int i, j, k;
  char string1[] = "Hello Geek";
  char string2[] = "Geek";
  i = strcmp(string1, "Hello Geek") ;
  j = strcmp(string1, string2) ;
  k = strcmp(string1, "Test Program") ;
  printf("\n%d %d %d", i, j, k);
}
