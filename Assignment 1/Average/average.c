#include<stdio.h>
float average()
{
    int i;
    float temp;
    float avg=0;
    printf("Enter 10 integers: ");
    for(i=0;i<10;i++)
    {
        scanf("%f",&temp);
        avg+=temp;
    }
    avg/=10;
    return avg;
}
int main()
{
    float avg = average();
    printf("Average = %f", avg);
    return 0;
}
