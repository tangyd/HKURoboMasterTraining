//*The file take 10 integers from input*
 // and then promote the average of the 10 inputs
 //* /


#include <stdio.h>

int main ()
{   float average,x;
    int i;
    i=0;
    for (i = 0; i<10; i++)
	{   scanf("%f",&x);
	    average += x/10;
	    
}
    printf("%f",average);
	return 0;
}

