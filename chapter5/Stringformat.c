//program to read any three word name and display with some formats using printf

#include<stdio.h>

int main()
{
	char name1[20],name2[20],name3[20];
	
	printf("Enter the name of Three words:\n");
	scanf("%s %s %s",name1,name2,name3);
	
	printf("%s %.1s. %s\n",name1,name2,name3);
	printf("%.1s. %.1s. %s\n",name1,name2,name3);
	printf("%s %.1s. %.1s.",name3,name1,name2);
	
	return 0;
	 
}