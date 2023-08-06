//program to generate fibonacci series using two method

#include<stdio.h>

//function that will generate the fibbonacci series
void fibbonacci(int);

int main()
{
    int choice,range;
	
	printf("Enter the range to get fibbonacci series: ");
	scanf("%d",&range);
	
	printf("\n Enter 1 to use funtion and any other to use normal process: ");
	scanf("%d",&choice);
	
	if(choice == 1)
	   fibbonacci(range);
	else
	{
	   int a = 1,b =0,c=0;
	   
	   do
	   {
	   	  c = a + b;
	   	  printf("%3d",c);
	   	  a = b;
	   	  b = c;
	   }while(c<range);
	}
	return 0;	
}

void fibbonacci(int n)
{
	int a=1,b=0,c=a+b;
	
	while(c<=n)
	{
		printf("%3d",c);
		a = b;
		b = c;
		c = a+b;
	}
}