#include<stdio.h>

float myfunction() 
{
	printf("Enter 10 integers: \n");
	int i,sum=0;
	float ave;
	for(i=0;i<10;i++)
	{
		int a;
		scanf("%d",&a);
		sum+=a;
	}
	return ave=sum/10.0;
}
 
int main()
{
	float result;
	result=myfunction();
	printf("%f",result);
}
