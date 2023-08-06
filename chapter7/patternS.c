//program to print letter S using special characters

#include<stdio.h>
#define R 15
#define C 18

int main()
{
   int i,j;
   
   for(i=1;i<=15;i++)
   {
   	 for(j=1;j<=18;j++)
   	 {
   	    if(i==1||i==2||i==3||i==7||i==8||i==9||i==13||i==14||i==15)
		    printf("*");
		else
		{
		   if(i<7 && j<5)
		          printf("*");
		   else
		   {
		   	   if(i>9 && j>14)
		   	      printf("*");
		   	   else
		   	      printf(" ");
		   }	
		}	
	
	 }
	 printf("\n");
   }
   
   return 0;
}