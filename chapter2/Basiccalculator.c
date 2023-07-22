//program to write a simple calculator 

#include<stdio.h>

//function read and write declaration 
int funcread();
void funcshow(int count);

//global declaration

int num1,num2;

int main()
{
	int count=0;
	
	printf("Enter the number in following boxes:\n");
	printf("X = ");
	num1=funcread();
	printf("\n");
	printf("Y = ");
	num2=funcread();
	
	//printing the result of operation on two numbers
	printf("_______________________________________________________________________\n");
	printf("SUM =");
	funcshow(++count);
	printf("\n");
	printf("Difference =");
	funcshow(++count);
	
	printf("\n");
	
	printf("Product =");
	funcshow(++count);
	printf("\n");
	printf("Division =");
	funcshow(++count);
    
	return 0;	
}

int funcread()
{
   int num;
   
   printf("--------\n");
   printf("|      ");
   scanf("%d",&num);
   printf("       |\n");
   printf("--------\n");
   return num;
}

void funcshow(int count)
{
	
   printf("--------\n");
   printf("|      ");
   switch(count)
   {
   	 case 1: printf("%d",num1+num2);
   	         break;
   	 case 2: printf("%d",num1-num2);
   	         break;
   	 case 3: printf("%d",num1*num2);
   	         break;
   	 case 4: printf("%d",num1/num2);
   	         break;
   }
   printf("     |\n");
   printf("--------\n");
}