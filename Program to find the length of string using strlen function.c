#include <stdio.h>
#include <string.h>
main()
{
  int len1, len2;
  char name[] = "GeekCer!";
  len1 = strlen(name) ;
  len2 = strlen("Welcome Geek!");
  printf("\nString = %s length = %d", name, len1);
  printf("\nString = %s length = %d", "Welcome Geek!", len2);
}
