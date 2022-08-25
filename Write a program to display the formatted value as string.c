#include <stdio.h>
main()
{
  int a; /*Simple integer type */
  long int b; /* long integer type */
  short int c; /* short integer type */
  unsigned int d; /* unsigned integer type */
  char e; /* character type */
  float f; /* floating point type */
  double g; /* double precision floating point */
  a = 1023;
  b = 2222;
  c = 123;
  d = 1234;
  e = 'X';
  f = 3.14159;
  g = 3.1415926535898;


  printf("\na = %d",a); // decimal output
  printf("\na = %o",a); // octal output
  printf("\na = %x",a); // hexadecimal output
  printf("\nb = %1d",b); // decimal long output
  printf("\nc = %d",c); // decimal short output
  printf("\nd = %u",d); // unsigned output
  printf("\ne = %c",e); // character output
  printf("\nf = %f",f); // floating output
  printf("\ng = %f",g); // double float output
  printf("\n");
  printf("\na = %d",a); // simple int output
  printf("\na = %7d",a); // use a field width of 7
  printf("\na = %-7d",a); // left justify in field of 7
  printf("\n");
  printf("\nf = %f",f); // simple float output
  printf("\nf = %12f",f); // use field width of 12
  printf("\nf = %12.3f",f); // use 3 decimal places
  printf("\nf = %12.6f",f); // use 6 decimal places
  printf("\nf = %-12.5f",f); // left justify in field
}
