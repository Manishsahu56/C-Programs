#include <stdio.h>
#include <string.h>
main()
{
  char source[] = "Geek!";
  char target[30] = "Welcome ";
  strcat(target, source);
  printf("\nSource string = %s", source);
  printf("\nTarget string = %s", target);
}
