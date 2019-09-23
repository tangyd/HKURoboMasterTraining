#include <stdio.h>
#include <stdlib.h>

float average;

int main()
{
    printf("Enter ten numbers:");

    float a,b,c,d,e,q,w,r,t,y;
    scanf("%f %f %f %f %f %f %f %f %f %f ",&q, &w, &r, &t,&y, &a, &b, &c, &d, &e);
    average=(a+b+c+d+e+q+w+r+t+y)/10;

    printf("%f\n", average);

return 0;
  }
