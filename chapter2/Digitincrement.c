// program to increment each digit of a given number by one
#include<stdio.h>

//function declared are to find the reversed and increment each digit of the given number
int reverse(int N);
int increment(int N);

int main()
{
	int number,reversed;
	
	printf("Please enter any digit number:\n");
	scanf("%d",&number);
	
	reversed= reverse(number);
	
	printf("After incrementing each digit the number %d turns: %d",number,increment(reversed));
	
	return 0;
		
}
int reverse(int N)
{
	int remain, result=0;
	
	while(N>0)
	{
		remain = N%10;
		result = result * 10 + remain;
		N = N/10;
	}
	
	return result;
}
int increment(int N)
{
   	int remain, result=0;
	
	while(N>0)
	{
		remain = N%10 + 1;
		
		result = result * 10 + remain;
		N = N/10;
	}
	
	return result;	
}