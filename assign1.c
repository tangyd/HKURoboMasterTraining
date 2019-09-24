#include<stdio.h>
#include"assign1.h"

float takeaverage()
{
	float sum = 0;
	int n;
	for (int i = 0; i<10; i++){
		scanf("%d", &n);
		sum += n;
	}
	return sum/10;
}

int main()
{
	printf("Enter 10 integers:");
	printf("%f\n", takeaverage());
	return 0;
}