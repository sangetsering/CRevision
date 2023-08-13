//program to generate graph of sin function

#include<stdio.h>
#include<math.h>


int main()
{
	float angle = 0,y;
	int i=0,j;
	printf("        y ------>   \n");
	printf(" ------------------------- \n");
	
	while(i<=180)
	{
		if(i==90)
		{
			printf("x|");
		}
		else
		  printf(" |");
		
		angle = (3.14/180) * i;
		y = sin(angle);
		
		j = (int)10*y;
	    
		while(j>=0)
		{
		   printf(" ");
		   j--;
		}
		printf("*");	
		i = i+15;
		
		printf("\n");
	}
    
	return 0;	
	
}