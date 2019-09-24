#include "trial.h"
float Average()
{
    printf("Enter 10 integers:\n");
    int i,iSum=0;
    float fAverage;
    for (i=1; i<=10; i++)
    {
        int iAdd;
        scanf("%d", &iAdd);
        iSum=iSum+iAdd;
    }
    return fAverage=iSum/10;
}
int main()
{
    float fResult;
    fResult=Average();
    printf("%f", fResult);
}
