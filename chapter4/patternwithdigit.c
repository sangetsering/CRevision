//Displaying the number's digit with the pattern 

#include<stdio.h>

//funciton definition;
int reverse(int);

int main()
{
	int i,number,remain,xnumber;
	
	printf("Enter the number:\n");
	scanf("%d",&number);
	
	//function reverse calling to reverse the number by digits
	number = reverse(number);
	printf("\n\n");
	while(number>0)
	{
		xnumber = number;
		while(xnumber>0)
		{
			remain = xnumber%10;
			printf("%2d",remain);
			xnumber = xnumber/10;
		}
		printf("\n");
		number = number/10;
	}
	
	return 0;
}


int reverse(int number)
{
   int sum=0,remain;
   
   while(number>0)
   {
   	  remain = number%10;
   	  sum = sum*10 + remain;
   	  number = number/10;
   }
   
   return sum;
}