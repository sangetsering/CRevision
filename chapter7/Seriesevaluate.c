//program to evaluate the function to 0.0001% accuracy

#include<stdio.h>

//exponential function
float exponent(float,int);
int main()
{
   float x,sinx,cosx=1,sum=1,accuracy=0;
   int i=0;
   
   printf("Enter the value of X(angle): ");
   scanf("%f",&x);
   
   sinx = x;
   //sinx computation
   while(sinx != accuracy)
   {
     	sinx = sinx + sinx*(-exponent(x,(2*i+1))/fact(2*i+1));
     	i++;
     	accuracy = sinx - sinx*(0.000001);
   }
   
   accuracy =0;
   i =1;
   //cosx computation
   while(cosx != accuracy)
   {
     	cosx = cosx + cosx*(-exponent(x,(2*i))/fact(2*i));
     	i++;
     	accuracy = cosx - cosx*(0.000001);
   }
   	
   //sum computation
   accuracy = 0;
   i = 1;
   while(sum != accuracy)
   {
     	sum = sum + sum*exponent(1.0/++i,i);
     	accuracy = sum - sum*(0.000001);
   }
   
   printf("\nsinx : %f  cosx : %f  sum : %f",sinx,cosx,sum);
   
   return 0;
}

int fact(int n)
{
	if(n == 1)
	  return 1;
	else
	  return n*fact(n-1);
}

float exponent(float x, int n)
{
	int i;float num = 1.0;
	
	for(i=0;i<n;i++)
	{
	   	 num = num * x ;
	}
	
	return num;
}