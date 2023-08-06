//program to reverse the number and compute the dum of digits

#include<stdio.h>

int main()
{
	int remain;
	int number,sum=0,reverse=0;
	
	printf("Enter the number of any digit: ");
	scanf("%d",&number);
	
	while(number>0)
	{
		remain = number%10;
		reverse = reverse*10 + remain;
		sum = sum + remain;
		number = number/10;
	}
    	
	printf(" Reverse : %d \n Sum of digits: %d",reverse,sum);
	return 0;
}