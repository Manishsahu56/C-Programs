#include <stdio.h>
void main()
{
  FILE *fp;
  int c;
  fp = fopen("file.txt", "r");
  if(fp == NULL)
  {
    printf("File does not exist, please check file location!\n");
  }
  else
  {
    c = getc(fp) ;
    while(c != EOF)
    {
      putchar(c);
      c = getc(fp);
    }
  }
  fclose(fp);
}
