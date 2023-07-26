//converting number of days into year , week and days

#include<stdio.h>

int main()
{
	int days,week,year,day;
	
	printf("enter the number of days:\n");
	scanf("%d",&days);
	
	//dividing into year and week and atlast remaining into days
	year = days/365;

    day = days%365;
    
    week = day/7;
    
    day = day%7;
    
    printf("%d Days is equal to : %d year %d week %d days",days,year,week,day);
    
    return 0;
	
}