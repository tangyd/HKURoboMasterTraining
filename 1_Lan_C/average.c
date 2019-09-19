/*The file take 10 integers from input
  and then promote the average of the 10 inputs
 */
#include <stdio.h>
#include "average.h"


float avg(){
  printf("Enter 10 integers:");
  int sum=0;
  int cur;
  for(int i=0;i<10;i++){
    scanf("%d",&cur);
    sum+=cur;
  }
  return (float)sum/10;
};

int main ()
{
  float average = avg();
  printf("Average : %f",average);
  return 0;
}
