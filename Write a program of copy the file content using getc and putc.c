#include <stdio.h>
void main()
{
  char in_file[30], out_file[30], c;
  FILE *fpin, *fpout;;
  printf("Enter name of the source file: ");
  scanf("%s", in_file);
  printf("Enter name of the destination file: ");
  scanf("%s", out_file);
  if((fpin = fopen(in_file, "r")) == NULL)
  {
    printf("Error could not open source file for reading.\n");
  }
  else if((fpout = fopen(out_file, "w")) == NULL)
  {
    printf("Error could not open destination file for writing.\n");
  }
  else
  {
    while((c = getc(fpin)) != EOF)
    {
      putc(c, fpout);
    }
    printf("Destination file has been copied.\n");
  }
  fclose(fpin);
  fclose(fpout);
}
