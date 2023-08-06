//prgram to generate the value of trignometric ratio

#include<stdio.h>
#include<math.h>   //math library to use the trignometric funciton

int main()
{
	char choice;
	double angle;
	double solu;
	
	printf("Enter the angle: choose s/S, c/C, 0r t/T for sin(x), cos(x), or tan(x): ");
	scanf("%lf %c",&angle,&choice);
	
	angle = angle*(3.14/180);
	
	if(isupper(choice))
	   choice = tolower(choice);
	
	switch(choice)
	{
		case 'c': solu = cos(angle);
		        break;
	    case 's': solu = sin(angle);
		        break;
	    case 't': solu = tan(angle);
		        break;
		default: printf("\nchoice INVALID:");
		         exit(0);
	}
	
	printf("\n The Ratio for your choice: %c -- is : %lf",choice,solu);
	return 0;
}