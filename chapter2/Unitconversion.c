//program of unit conversion of distances

#include<stdio.h>

/*      
     note
     1feet --- 12inches
     1inches --- 2.54cm
     1m --- 100cm
     1km --- 1000m
     1miles ----1.609334km
*/

int main()
{
	float number;
	
	printf("enter the distance between two cities:\n");
	scanf("%f",&number);
	
	printf("printing in the form of:\n");
	
	printf("--> meter : %.2f\n",number*1000);
	printf("--> Feet : %.2f\n",number*100000*(1/30.48));
	printf("--> Inches : %.2f\n",number*100000*(1/2.54));
	printf("--> Centimeters : %.2f\n",number*100000);
	printf("--> miles : %.2f\n",number*(1/1.609334));
	
	return 0;
}
     