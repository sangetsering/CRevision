//program for date validation

#include<stdio.h>

int main()
{
	int day , month ,year ,flag = 0;
	
	printf("Enter you date in format YY MM DD:\n");
	scanf("%d %d %d",&year,&month,&day);
	
	if(month > 12 || day > 31)
    {
    	printf("Your check you Month and date once again:\n");
    	exit(0);
	}
	else
	{
		if(month >= 8 && month <= 12)
		{
			if(month%2 == 0 && day<=31)
			     flag = 1;
		    else
		    {
		    	if(day<=30)
		    	   flag = 1;
			}
		}
		else
		{
		   if(month%2 == 0 && day<=30)
		     flag = 1;
		   else
		   {
		      if(month == 2)
			  {
			  	  if(year%4 == 0 && day <= 29)
			  	      flag = 1;
			      else
			      {
			      	if(day<=28)
			      	  flag = 1;
				  }
			  }
			  else
			  {
			  	 if(day <= 31)
			        flag = 1;
			  }	
		   }	
		}
	}
	
	if(flag == 1)
	  printf("\n %d : %d : %d is valid date!",year,month,day);
	else
	  printf("\n %d : %d : %d is invalid date!",year,month,day);

    return 0;
	
}