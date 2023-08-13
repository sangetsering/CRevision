//program to print the matrix of 1, 0 and -1 as an element of it
#include<stdio.h>

int main()
{
   int R,C,i=0,j=0;
   
   printf("Enter the number of Row and Column: ");
   scanf("%d%d",&R,&C);
   
   int matrix[R][C];
    
   //generating the element in the array matrix
     
    for(i=0;i<R;i++)
    {
    	for(j=0;j<C;j++)
    	{
    		if(j==(C-1)-i)
    		   matrix[i][j]=0;
    		else
    		{
    			if(j<(C-1)-i)
    			   matrix[i][j]=1;
    			else
    			   matrix[i][j]=-1;
			}
		}
	}
	
	printf("The matrix of order %dX%d: \n",R,C);
    for(i=0;i<R;i++)
    {
    	for(j=0;j<C;j++)
    	{
    		printf("%4d",matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}