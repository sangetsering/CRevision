//program to design a kite of paterns of numbers
/* 
        1
      1 2 1
    1 2 3 2 1        mid = 3
      1 2 1
        1 
*/
#include<stdio.h>

int main()
{
	int mid,N,i,j,k,l; //mid = middle element ____ N = number of rows 
	
	printf("Enter the number you want in the middle of the pattern: ");
	scanf("%d",&mid);
	
	//calculating number of rows
	N = 2*mid - 1; 
	
	for(i=1;i<=N;i++)
	{
		if(i<=mid)  //working for upper pattern till mid number of row
		{
			j = mid-i;
			while(j>=0)  //printing the number of space required per pattern
			{
				printf("  ");
				j--;
			}
			
			for(k=1;k<=i;k++) //printing the numbers 1 in 1th row and like wise
			{
				printf("%2d",k);
			}
			
			l = (--k)-1;   // printing number till 1 staring from number k-1
			while(l>0)
			{
				printf("%2d",l);
				l--;
			}
		}
		else
		{
		   	j = 1;
			while(j<=(i-mid)+1) //printing the space as per required in pattern 
			{
				printf("  ");
				j++;
			}
			
			for(k=1;k<=(N+1-i);k++)  // printing reverse of number above the mid the row
			{
				printf("%2d",k);
			}
			
			l = (--k)-1;
			while(l>0)        // printing till 1 starting from k-1 
			{
				printf("%2d",l);
				l--;
			}	
		}
		
		printf("\n"); // newline after each iteration
	}
	
	return 0;
}