//Program to find transpose of matrix and product of two matrix

#include<stdio.h>

int main()
{
    int mat1[10][10],mat2[10][10];
    int N,M,i=0,j=0;
    
    printf("Enter the number of row and column matrix 1: ");
    scanf("%d%d",&N,&M);
     //To read matrix 1
     printf("Enter the element 1 by 1: ");
     for(i=0;i<N;i++)
     {
     	for(j=0;j<M;j++)
     	{
           scanf("%d",&mat1[i][j]);     		
		}
	 }
    printf("\nEnter the number of row and column matrix 2: ");
    scanf("%d%d",&N,&M);
      //To read matrix 2
    printf("\nEnter the element 1 by 1: ");
     for(i=0;i<N;i++)
     {
     	for(j=0;j<M;j++)
     	{
           scanf("%d",&mat2[i][j]);     		
		}
	 }   
	
	//product of two matrix
	printf("\n         Product of two matrix ");
	printf("\n______________________________________ \n");
     for(i=0;i<N;i++)
     {
     	for(j=0;j<M;j++)
     	{
           printf("%3d",mat1[i][j]*mat2[i][j]);     		
		}
		printf("\n");
	 }
	printf("\n______________________________________ ");
	
	//Transpose matrix
	printf("\n         Transpose of A matrix ");
	printf("\n______________________________________ \n");
     for(i=0;i<N;i++)
     {
     	for(j=0;j<M;j++)
     	{
           printf("%3d",mat1[j][i]);     		
		}
		printf("\n");
	 }
	printf("\n______________________________________ ");
	
	
}
