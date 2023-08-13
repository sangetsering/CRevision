//program to record the temperature of x cities in N number of days

#include<stdio.h>

int main()
{
	int N,x,i,j,lowest,highest;
	
	printf("Enter the number of days: and number of cities: ");
	scanf("%d%d",&N,&x);
	
	int temperature[N][x];
	
	printf("\nEnter the temperature of: \n");
	for(i=0;i<x;i++)
	{
		printf("City %d of %d days\n",i+1,N);
		for(j=0;j<N;j++)
		{
		   scanf("%d",&temperature[i][j]);
		}
	}
	
	//initialization
	int a,b,c,d; //variable for number of day and city
	highest=lowest=temperature[0][0];
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<N;j++)
		{
		   if(temperature[i][j]>highest)
		   {
		   	  highest = temperature[i][j];
		   	  a = i;
		   	  b = j;
		   }
		   
		   if(temperature[i][j]<lowest)
		   {
		   	  lowest = temperature[i][j];
		      c = i;
		      d = j;
		   }
		   
		}
	}
	
	printf("\nThe highest temperature : %d was at %d day in city %d",highest,b+1,a+1);
    printf("\nThe Lowest temperature : %d was at %d day in city %d",lowest,d+1,c+1);
    return 0;
}
