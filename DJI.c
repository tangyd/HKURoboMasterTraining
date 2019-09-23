#include "DJI.h"
float GetAverage()
{
    int iter=10,i=0,sum=0;
    int str;

    for(;i<10;i++)
    {
    scanf("%d\n",&str);
    sum+=str;
    }
    return sum/iter;
}

int main(){
    printf("Enter 10 integers:\n");
    printf("%f\n",GetAverage());
    return 0;
}
