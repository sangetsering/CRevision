//program to evaluate the function to 0.0001% accuracy
//sinx = x-x^3/3! + X^5/5! -X^7/7!........
//cosx = 1- x^2/2! + x^4/4! - x^6/6!+........
//sum = 1 + (1/2)^2 + (1/3)^3 + (1/4)^4 + ......

#include<stdio.h>
#include<math.h>
#define accuracy 0.000001


//Declaration of functions

int factorial(int);       //to find factorial
double sin_series(double); //to calculate the sinx value
double cos_series(double);  //to calculate the cosx value
float sums(void);           // to calulate the sum of series

//main function begins
int main()
{
   double x,sinx,cosx;
   float sum;
   
   printf("Enter the value of X(angle): ");
   scanf("%f",&x);
   
   //converting x into radian
   x = x*(3.14/180); 
    
   //function calling 
    sinx = sin_series(x);
    
    cosx = cos_series(x);
    
	printf("\nActuaL sinx : %lf  Approx sinx : %lf",sin(x),sinx);
    printf("\nActuaL cosx : %lf  Approx cosx : %lf",cos(x),cosx);
    printf("\n 1+(1/2)^2+(1/3)^3+......  Approx sum : %f",sums());
    
    return 0;
}

int factorial(int n)
{
	if(n == 1)
	  return 1;
	else
	  return n*factorial(n-1);
}

double sin_series(double x)
{
    double sinx = x,y=x;
    int i=1;
	
	while(fabs(sinx)>accuracy)
	{
	    y*= (-1*x*x)/factorial(2*i+1);
		sinx+= y;
		i++;
	}	
    
    return sinx;
}

double cos_series(double y)
{
    double cosx = 1.00 ,x = 1.00;
    int i=1;
	
	while(fabs(cosx)>accuracy)
	{
		x*= (-1*y*y)/factorial(2*i);	
	    cosx = cosx + x;
		i++;
	}	
    
    return cosx;
	
}

float sums(void)
{
    float sum = 1.00;
    int i=2;
	
	while(fabs(sum)>accuracy)
	{
	    sum = sum + pow(1/i,i);
		i++;
	}	
    
    return sum;
	
}