//program to print out the net amount to be paid based on seasonal discount
#include<stdio.h>

int main()
{
	int amount;
	float net_pay;
	
	printf("Enter the purchased amount: ");
	scanf("%d",&amount);
	
	switch((amount-1)/100)
	{
		case 0: net_pay = amount -(amount*0.05);
		                   break;
		case 1: net_pay = amount -(amount*0.05 + amount*0.075);
		                   break;
	    case 2: net_pay = amount -(amount*0.075 + amount*0.1);
		                   break;
		default: net_pay = amount -(amount*0.1 + amount*0.15);
		                   break;			
	}
	
	printf("The net amount to be paid : %.2f ",net_pay);
    return 0;	
}
