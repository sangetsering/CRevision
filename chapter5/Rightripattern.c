/*program to print the following pattern 

 5 4 3 2 1
   4 3 2 1
     3 2 1
       2 1
         1
         */
         
#include<stdio.h>

int main()
{
	int N,i,j;
	
	printf("Enter a number to get the inverted right triangle patters of number:");
	scanf("%d",&N);
	
	i = N;
	while(i>0)
	{
		j = i;
		for(int a=i;a<N;a++)
		{
			printf("  ");
		}
		while(j>0)
		{
			printf("%2d",j);
			j--;
		}
		
		i--;
		printf("\n");
	}
	
	return 0;
}