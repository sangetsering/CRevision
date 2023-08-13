//program to find the original value of the asset at life time
//given formula p = c(1-d)^n

#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	float p,d,c;
	
	printf("Enter the expect scrape value: ");
	scanf("%f",&p);
	printf("\nEnter the number of year till then:  ");
	scanf("%d",&n);
	printf("\nEnter the rate of depreciation: ");
	scanf("%f",&d);
	
	c = p/pow((1-d),n);
	
	printf("\n The original cost of asset is : %f",c);
	
	return 0;
}