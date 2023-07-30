// program to display the inventory report of items 

#include<stdio.h>

int main()
{
	float pvalue[10],prate[10];
	int pquant[10],n,i,j;
	char pcode[10][10],ploca[10][10]; 
	
	printf("Enter the numer of product: ");
	scanf("%d",&n);
	 printf("\n pcode  location  quantity  rate:");
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the detail of product: %d \n",i+1);
		scanf("%s %s %d %f",pcode[i],ploca[i],&pquant[i],&prate[i]);
		pvalue[i] = pquant[i]*prate[i];
	}
	
	//printing the inventory table
	
	printf("\n   Inventory report of %d product ",n);
	printf("\n pcode  location  quantity  rate  value :");
	
	for(i=0;i<n;i++)
	{
		printf("\n %5s %5s %3d %.2f %.2f ",pcode[i],ploca[i],pquant[i],prate[i],pvalue[i]);
	}
	
	return 0;
}
