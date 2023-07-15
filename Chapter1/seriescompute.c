// program to print the multiple series computation 

#include<stdio.h>

int main()
{
	int i,j,N,choice;
	int result = 0;
	char run = 'y';
	
	printf("Enter Number range: ");
	scanf("%d",&N);
	
	printf("\nEnter Your choice to compute the result: ");
	printf("\n 1 -- 1! + 2! +.....+N!");
	printf("\n 2 -- 1x2 + 2x3 +.....+N");
	printf("\n 3 -- 2+4+.....+N");
	printf("\n 4 -- 3^2+5^2.....+N^2\n  ");
	scanf("%d",&choice);
	
	for(i=1;i<=N;i++)
	{
		if(choice == 1)
		{
			int fac = 1;
			j = i;
			while(j>0)
			{
				fac = fac*j;
				j--;
			}
			result = result + fac;
		}
		else
		{
			if(choice == 2)
			{
				result = result + i*(i+1);
			}
			else
			{
				if(choice == 3)
				{
			       if(i%2 == 0)
				     result =result + i;		
				}
				else
				{
			        if(i%2 != 0)
					   result = result + i*i;		
		    	}
				  
			}
		}
	}
	
	printf("\nAs per your choice[%d] the compute result = %d",choice,result);

	return 0;
}

