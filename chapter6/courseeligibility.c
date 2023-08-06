//program to 6060 code for professional course eligibility 

#include<stdio.h>

int main()
{
     int math,phy,chem,nets;
	 
	 printf("Enter the marks obatin in following subjects:\n");
	 printf("Maths Physics Chemistry: ");
	 scanf("%d %d %d",&math,&phy,&chem);
	 
	 nets = math + phy + chem;
	 
	 if(math >= 60 && phy >= 50 && chem >= 40 && nets >= 200)
	 {
	 	printf("\nYour are eligible for the course!!");
	 }
	  else
	  {
	  	if((phy + math)>=150)
	  	  printf("\nYour are eligible for the course!!");
	  	else
	  	   printf("\nYour are not eligible for the course!!");
	  }
	return 0;
} 