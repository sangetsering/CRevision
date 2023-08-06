//program to compute the value of Euler's number e.

#include<stdio.h>

//function to find factorial
int factorial(int);

int main()
{
	float Eulers=1.0;
	int limit,i;
	
	printf("Enter the limit number to get the value of Euler's e: ");
	scanf("%d",&limit);

    for(i=1;i<=limit;i++)
    {
    	Eulers = Eulers + 1.0/factorial(i);
	}
	
	printf("\nEulers e: %f",Eulers);
	return 0;
}

int factorial(int n)
{
	if(n==1)
	  return 1;
	else
	  return n*factorial(n-1);
}
