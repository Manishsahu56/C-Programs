#include <stdio.h>
#include <string.h>
main()
{
  char source[] = "GeekCer!";
  char target[25];
  strcpy(target, source);
  printf("\nSource string = %s", source);
  printf("\nTarget string = %s", target);
}
