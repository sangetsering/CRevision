// program to output the harmonic series of a given number

#include<stdio.h>

int main()
{
	float number,i=1.0;
	double harmonicvalue=0.0;
	
	printf("enter the Number to get the following series' computed result: \n");
	printf("\t 1+1/2+1/3+.......+1/N\n");
	
	scanf("%f",&number);
	
	while(i<=number)
	{
	    harmonicvalue = harmonicvalue + 1/i ; 
	    i= i+1.0;
	}
	
	printf("Vlaue : %lf",harmonicvalue);
	return 0;
}