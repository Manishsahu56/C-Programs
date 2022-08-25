#include <stdio.h>
struct Computer
{
  float cost;
  int year;
  float cpu_speed;
  char cpu_type[16];
};
void main()
{
  struct Computer model = { 800, 2005, 1.80, "Intel Core"}; // Initialization of structure
  printf("\nCPU type: %s", model.cpu_type);
  printf("\nCPU speed: %f GHz", model.cpu_speed);
  printf("\nYear: %d", model.year);
  printf("\nCost: $%4.2f", model.cost);
}
