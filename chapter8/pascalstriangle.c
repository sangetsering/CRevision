//program to generate pascal's triangle till given N row

#include<stdio.h>

int main()
{
	int N,i=0,j=0;
	printf("Enter the number of row for pascals triangle: ");
	scanf("%d",&N);
	int pascals[N][1000];
	
	//generating element for pascal's triangle
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0 || j==i)
			   pascals[i][j]=1;
		    else
	        {
	        	pascals[i][j] = pascals[i-1][j-1] + pascals[i-1][j];
			}
		}
	}
	
	printf("\nPascals triangle:\n");
	
	
	for(i=0;i<N;i++)
	{
		for(int k=N-i;k>=0;k--)
		{
		   	printf(" ");
		}
	
		for(j=0;j<=i;j++)
		{
			printf("%3d",pascals[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}