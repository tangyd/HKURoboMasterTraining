#include <stdio.h>
#include "whatelse.h"
float average()
{
  int a;int b;float c;
  for(;a<10;a++)
  {
    scanf("%d",&b);
    c=b+c;
  }
  return c/10;
}
int main()
{
  printf("Enter 10 integers:\n");
  float v=average();
  printf("%f\n",v);
  return 0;
}
