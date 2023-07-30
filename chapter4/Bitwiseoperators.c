//programs to illustrate the binary operators

#include<stdio.h>
#include<stdlib.h>  //for function strtol()--which converts binary into integers

//function of binary operators
void binaryoprt(int,int);

int main()
{
	char bnum1[100],bnum2[100];
	int num1,num2;
	
	printf("Enter the first Binary number: ");
	scanf("%s",bnum1);
	printf("\nEnter the second Binary number: ");
	scanf("%s",bnum2);
	
	num1 = (int)strtol(bnum1,NULL,2);  //converting binary strings into integer value
	num2 = (int)strtol(bnum2,NULL,2);
	
    binaryoprt(num1,num2);
    return 0;
}

void binaryoprt(int a,int b)
{
    printf("\nThe & operators on %d and %d : %d",a,b,a & b);
    printf("\nThe | operators on %d and %d : %d",a,b,a | b);
    printf("\nThe ^ operators on %d and %d : %d",a,b,a ^ b);
    printf("\nThe ~ operators on %d : %d",a,~a);
    printf("\nThe ~ operators on %d : %d",b,~b);
    printf("\nThe << operators on %d  2 : %d",a,a << 2);
    printf("\nThe >> operators on %d  2 : %d",a,a >> 2);
    printf("\nThe << operators on %d  2 : %d",b,b << 2);
    printf("\nThe >> operators on %d  2 : %d",b,b >> 2);
}