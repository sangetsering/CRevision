//program to print the number in words compliments

#include<stdio.h>

int main()
{
   int number, dummy=0, count,cnumber;
   char once[][10]={" ","one ","two ","three ","four ","five ","six ","seven ","eight ","nine "};
   char teens[][10]={" ","eleven ","twevel ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","ninteen "};
   char tens[][20]={" ","ten ","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninty "};
   char hundreds[][30]={"","hundreds ","thousands ","hundreds thousand","million ","hundreds million ","billion ","hundreds billion ","trillion ","hundreds trillion"};
   
   printf("enter number to get the its word form: \n");
   scanf("%d",&number);
   
   //condition
   if(number>9)
   {
   	    if(number>20)
   	    {
   	   	   if(number>99)
   	   	   {
   	   	      if(number>999)
			  {
			    printf("\nyour number is greater than 1000: I can't do this: ");		
	          }	
	          else
	          { 
	             printf("\nYour number in word: %s",once[number/100]);
	             printf("%s ",hundreds[1]);
	             number = number%100;
	             printf("%s",tens[number/10]);
	             printf("%s ",once[number%10]);
			  }
		   }
		   else
		      printf("\nYour number in word: %s %s",tens[number/10],once[number%10]);
	    }
		else
		  printf("\nYour number in word: %s",teens[number%10]);  
   }
   else
      printf("\nYour number in word: %s",once[number]);
      
      
      return 0;
   
   
}