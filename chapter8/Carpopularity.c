//program to show the pppularity of cars in cites

#include<stdio.h>

int main()
{
	int i=0,j=0,car;
	int showroom[4][4];
	
	char cname[4]={'B','C','D','M'};
	char city;
	
	printf("Enter B-Bombay,C-Calcutta,D-Delhi, and M-Madras: \n");
	printf("Enter the Car:\n");
	
	printf("Enter X to terminate: \n");
	while(1)
	{
		scanf("%c",&city);
		if(city == 'X');
		    break;
		scanf("%d",&car);
		
		switch(city)
		{
			case 'B': showroom[1][car-1]++;
			          break;
			case 'C': showroom[2][car-1]++;
			          break;
			case 'D': showroom[3][car-1]++;
			          break;
		    case 'M': showroom[4][car-1]++;
			          break;
		}
	}
	
	printf("%d",showroom[0][0]);
	//printing the popularity table
	printf("       popularity Table \n");
	
	printf("_______________________________________________\n");
	printf("City    Ambassador    Fiat    Dolphin    Maruti\n");
	printf("_______________________________________________\n");
	
	while(i <4)
	{
		printf("%c",cname[i]);
		j=0;
		while(j<4)
		{
			printf("%7d",showroom[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
	printf("_______________________________________________\n");
	return 0;
}