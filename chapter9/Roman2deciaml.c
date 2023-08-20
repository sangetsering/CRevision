//program to convert Roman into Decimal

#include<stdio.h>

//globle declaration
char Roman[100];

//function
int DeciRo(char);

int main()
{
   int i=0,decimal=0;
   char ins;
   
   printf("Enter the Roman number: \n");
      scanf("%s",Roman);
   	
   	//calculating the decimal
   	i=1;
   	while(Roman[i]!='\0')
   	{
   	   if(DeciRo(Roman[i])>DeciRo(Roman[i-1]))
	   {
		  	decimal = decimal + (DeciRo(Roman[i]) - DeciRo(Roman[i-1]));
   	   }	
   	   else
   	   {
   	   	   decimal = decimal + DeciRo(Roman[i]);
		}
	}
	
	printf("The Roman of %s: __is Deciamal %d:",Roman,decimal);
}

int DeciRo(char n)
{
	int Decimal = 0;
	
	switch(n)
	{
		case 'I': Decimal = 1;
		          break; 
	    case 'V': Decimal = 5 ;
		          break;
		case 'X': Decimal = 10;
		          break;
		case 'L': Decimal = 50;
		          break;
		case 'C': Decimal = 100;
		          break;
		case 'D': Decimal = 500;
		          break;
		case 'M': Decimal = 1000;
		          break;
		default: printf("\nCheck you enter Roman number: \n");
		          return;
	}
	
	return Decimal;
}