//program to plot two function for y1>y2 , y1<y2, and y1 = y2 

#include<stdio.h>
#include<math.h>


int main()
{
   int i;
   float y1,y2,a,x;
   a = 0.4;
   
   printf("          ----> Y\n");
   printf(" --------------------------------------------------------------\n");
   
   for(x=0;x<5;x=x+0.25)
   {
   	  //evaluation of functions
   	  y1 = (int)(50*exp(-a*x) + 0.5);
   	  y2 = (int)(50*exp(-a*x*x/2) + 0.5);
   	  
   	  //plotting for y1 = y2 
   	  if(y1 == y2)
   	  {
   	    if(x == 2.5)
		   printf("X|");
		else
		   printf(" |");
		for(i = 1;i<=y1-1; ++i)	
		   printf(" ");
		printf("#\n");	
	  }
	  
	  //plotting for y1<y2
	  else if(y1<y2)
	  {
	  	if(x == 2.5)
	       printf("X|");
	    else
	       printf(" |");
	    for(i=1;i<=y1-1;++i)
	       printf(" ");
	    printf("0");
	    for(i =1;i<=(y2-y1-1);++i)
	       printf("-");
	    printf("*\n");
	  }
	  
   	  //plotting for y1>y2
   	  else
   	  {
   	   	if(x == 2.5)
	       printf("X|");
	    else
	       printf(" |");
	    for(i=1;i<=y2-1;++i)
	       printf(" ");
	    printf("*");
	    for(i =1;i<=(y1-y2-1);++i)
	       printf("-");
	    printf("0\n");
	     	
	  }
	  
	  printf(" \n");
	}	
	
	return 0;
}