//Program to compute the EOQ and TBO given that the demand rate, detup cost and holding cost

#include<stdio.h>
#include<math.h>

//function EOQ and TBO for to calculate inventory management
void fEOQ(float,float,float);
void fTBO(float,float,float);

int main()
{
	float Demandrate,Setupcost,Holdcost;
	float EOQ,TBO;
	
	printf("Enter the Setup cost:");
	scanf("%f",&Setupcost);
			
	printf("\nEnter the Demandrate cost:");
	scanf("%f",&Demandrate);
	
	printf("\nEnter the Hold cost:");
	scanf("%f",&Holdcost);
	
    fEOQ(Demandrate,Setupcost,Holdcost);	
	fTBO(Demandrate,Setupcost,Holdcost);
	
	return 0;
}

void fEOQ(float DR,float SC,float HC)
{
	float computed;
	
	computed = (2*DR*SC)/HC ;
	computed = sqrt(computed);
	
	printf("\nEOQ = %f",computed);
}

void fTBO(float DR,float SC,float HC)
{
	float computed;
	
	computed = (2*SC)/(HC*DR);
	computed = sqrt(computed);
	
	printf("\nTBO = %f",computed);
}