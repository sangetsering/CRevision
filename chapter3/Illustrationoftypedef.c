//program to illustrate the use of typedef declaration 

#include<stdio.h>

int main()
{
	typedef char mang;
	typedef int dangka;
	dangka Idnum;
	mang name[20];
	
	printf("EEnag ku mang brigha:\n ");
	scanf("%s",name);
	printf("Aang Dranka poota:\n");
	scanf("%d",&Idnum);
	
	
	printf("Phosa: %s Aangdrang: %d",name,Idnum);
	
	return 0;
}