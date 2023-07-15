//program to generate the prime numbers between 1 to N number

#include<stdio.h>

int main()
{
	int N,i,j;
	
	printf("enter the number to get the prime number between 1 and the entered number:\n");
	scanf("%d",&N);
    
    printf("prime number are:\n");
	for(i=2;i<=N;i++)
	{
      int flag = 1;
	  for(j=2;j<i;j++)        //checking whether i is prime or not
	  {
	  	if(i%j == 0)
	    {
	    	flag = 0;
	    	break;           // jumping to the next iteration of external loop if curren value of i is not prime  
		}
		
	  }
	  
	  if(flag == 1)
	     printf("%8d",i);
	  	
    }	
    
	return 0;
}