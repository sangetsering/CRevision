// program to print the square root of decimal numbers from 0.0 till 9.9

#include<stdio.h>
#include<math.h>

int main()
{
	float a = -1.0,b = 0.0,i,j;
	
	printf("  square root Table for decimal points: \n");
	
	for(i=0;i<11;i++)
	{
		b = 0.0;
		for(j=0;j<10;j++)
		{
			if(j==0)
			{
				if(i == 0)
			      printf("Number");
			    else
			      printf("%6.1f",a);
		    }
		    else
		    {
		    	if(i == 0)
		    	   printf("%6.1f",b);
		    	else
		    	   printf("%6.1f",sqrt(a+b));
			}
			b = b + 0.1;
		}
		printf("\n");
		a = a + 1.0;
	}
	
	return 0;
}