//program to printout the sum of first and last digit of any number

#include<stdio.h>

int main()
{
	int number,sum=0,flag;
	
	printf("enter any digit number\n");
	scanf("%d",&number);
	
	sum = sum + number%10;
	
	while(number>0)
	{
		flag = number%10;
		number = number/10;		
	}
	
	sum = sum + flag;
	
	printf("Sum of first and last digit of number is :%d",sum);
	
	return 0;
}