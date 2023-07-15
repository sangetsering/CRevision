//program to find the sum of the digits of the numbers

#include<stdio.h>

int main()
{
	int sum = 0;
	int number,dummy;
	
	printf("enter the number to get the sum of its digits:");
	scanf("%d",&number);
	
	dummy = number;
    
	while(dummy>0)
	{
	   int remainder;
       remainder = dummy%10;
	   sum = sum + remainder;
	   dummy = dummy/10;   	   
	}
	
	printf("\n Sum of digits of %d = %d",number,sum);
	
}