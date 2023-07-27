// Displaying the two right most digit of the floating number

#include<stdio.h>

int main()
{
	float number;
	int digits,count,i=0,remain;
	
	printf("Enter the floating number: ");
	scanf("%f",&number);
	
	printf("\n Enter how many right most digit you want: ");
	scanf("%d",&count);
	
	remain = (int)number;
	
	while(i<count)
	{
		digits= remain%10;
		remain = remain/10;
		printf("The %d digit of integral part:%d  ",i+1,digits);
		i++;
	}
	
	return 0;
}