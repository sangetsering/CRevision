//To showcase the greatest integer function 
#include<stdio.h>

int main()
{
   float realnumber;
   
   printf("Enter any real number:\n ");
   scanf("%f",&realnumber);
   
   printf("Smallest integer greater than: ");
   printf("| The number :| ");
   printf("Greatest integer smaller than the number:\n");
   
   printf("%15d %28f %15d",(int)realnumber+1,realnumber,(int)realnumber);
   
   return 0;
   
}