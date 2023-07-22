//program to give glimpse of function
#include<stdio.h>
#define num1 20
#define num2 10

//functions to be used
int sum();
int sub();
void fborder();

int main()
{
   
   fborder();
   printf("%d + %d = %d\n",num1,num2,sum());
   fborder();
   printf("\n");
   fborder();
   printf("%d - %d = %d\n",num1,num2,sub());
   fborder(); 
   
   return 0;  	
}

void fborder()
{
	printf("-----------\n");
}

int sum()
{
	return num1+num2;
}

int sub()
{
	return num1-num2;
}
