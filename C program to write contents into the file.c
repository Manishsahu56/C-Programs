#include <stdio.h>
void main()
{
  FILE *fp;
  fp = fopen("file.txt", "w");
  fprintf(fp,"%s","This is just an example of file.");
  fclose(fp);
}
