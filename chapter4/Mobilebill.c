//program to print out the cost of mobile bill

#include<stdio.h>
#define MobS 250
#define OS 1.25

int main()
{
   int Cmade;
   float price = MobS;
   char Ccode[20];
   printf("Enter your customer code: ");
   scanf("%s",Ccode);
   printf("And your number of calls made: ");
   scanf("%d",&Cmade);
   
   if(Cmade>99)
   {
   	  Cmade = Cmade - 99 ;
   	  price = price + OS*Cmade ;
   }
   
   printf("\n Dear Customer : %s \n you have got %f payment to pay!!",Ccode,price);
   return 0;
}