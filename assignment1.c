#include <stdio.h>
#include "uselessheader.h"

float average(){

    int a, b, c, d, e, f, g, h, i, j;

    printf("Enter 10 integers: ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

    float sum = a+b+c+d+e+f+g+h+i+j;

    return sum/10;
}

int main()
{
    printf("%f", average());

    return 0;
}
