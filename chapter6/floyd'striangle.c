//program to print the floyds trianlge 

#include<stdio.h>

//function to that will draw the pattern
void fpattern(int,int);

int main()
{
   int n,range; 

   printf("Enter the range:\n");
   scanf("%d",&range); 
   printf("Enter your choice: 1>Natural pattern 2>Binary pattern : \n");
   scanf("%d",&n);

   
   fpattern(n,range);
   
   return 0;
}

void fpattern(int n,int a)
{
	int i,j,num=1;
	
	if(n == 1)
	{
		for(i=0;i<a;i++)
		{
			for(j=0;j<=i;j++)
			{
				printf("%3d",num++);
			}
			printf("\n");
		}
		
		return;
	}
	else
	{
		for(i=0;i<a;i++)
		{
			for(j=0;j<=i;j++)
			{
				if((i+j)%2 == 0)
				   printf(" 1 ");
				else
				   printf(" 0 ");
			}
			printf("\n");
		}
	    return;		
	}
}