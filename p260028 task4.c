#include<stdio.h>
int main()
{  
  char c = 'M'; 
  int i = 42;
  float f = 3.141590;
  double d = 98.765432;

  printf("Type Name   Variable Valve    Sizein Memory\n");
  printf("---------------------------------------------------\n");
  printf("char\t\t'%c'\t\t          %zu byte(s)\n", c, sizeof(c));
  printf("int\t\t     %d\t\t\t      %zu byte(s)\n", i, sizeof(i));
  printf("float\t\t%f\t\t  %zu byte(s)\n", f, sizeof(f));
  printf("double\t\t%f\t\t %zu byte(s)\n", d, sizeof(d));
  printf("----------------------------------------------------\n");
  
  return 0;
