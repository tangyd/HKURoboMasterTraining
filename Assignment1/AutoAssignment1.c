#include "stdio.h"
#include "AutoAssignment1.h"
int main(){
    int temp;
    int count = 0;
    int sum = 0;

    printf("Enter 10 integers:\n");
    while(count < 10){
        scanf("%d",&temp);
        sum+=temp;
        ++count;
    }


    printf("\n%f", calAvg(sum));
    
}