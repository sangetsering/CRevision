//program to count the frequency of student in each group of marks stage

#include<stdio.h>

int main()
{
	int i,marks[50],D;
	int frequency[11]={0};
	
	printf("Enter the marks:");
	for(i=0;i<50;i++)
	   scanf("%d",&marks[i]);
	
	//counting the frequency
	
	i=0;
	while(i<50)
	{
		D = marks[i]/10;
	    frequency[D]++;
	    i++;
	}
	
	printf(" S.NO           Group         Number_of_students \n");
	D = 0;
	for(i=0;i<10;i++)
	{
		printf("%3d %14d - %d %15d",i+1,D,D+9,frequency[i]);
		D = D+10;
		printf("\n");
	}
	
	return 0;
}