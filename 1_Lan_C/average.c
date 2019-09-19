#include <stdio.h>
#include "assignment_1.h"

float average()	{
	printf("Enter 10 integers: ");
	int i = 0;
	int integers[10];
	int average = 0;
	for (i = 0; i < 10; i++)	{
		scanf(" %d", &integers[i]);
		average += integers[i];
		}
	average /= 10;
	return average;
	}

int main()	{
	int avg = average();
	printf("%d\n", avg);
	return 0;
	}
