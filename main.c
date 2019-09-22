#include <stdio.h>
#include "Header.h"
int main(void) {
    printf("%f\n",average());
    return 0;
}
float average(void)
{
    int i=0,number;
    float sum;
    printf("Enter 10 integers:\n");
    for(i=0;i<10;i++){
        scanf("%d",&number);
        sum+=number;
    }
    return sum/10;
}
