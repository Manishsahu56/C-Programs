#include <stdio.h>
void main()
{
  FILE *fp;
  fp = fopen("file.txt", "r");
  if(fp == NULL)
  {
    printf("File does not exist, please check file location!\n");
  }
  else
  {
    printf("File Opened!\n");
  }
  fclose(fp);
}
