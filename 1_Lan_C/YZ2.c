#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "YZ2.h"


int main() {
  float x=1.0;
  float y=2.0;
  mean= (x+y)/2;
  printf("%f\n", mean);

  struct Yz YZ;
  YZ.yz=SUCCESS;
  YZ.b=18;
  YZ.a=1.0;
  YZ.pointera=&YZ.a;
  strcpy(YZ.c,"YunZe");

  printf("%s's age is %d.\n",YZ.c, YZ.b);
  printf("%p\n", YZ.pointera);
  printf("%d\n", YZ.yz);


return 0;
}
