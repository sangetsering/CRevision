//program to print the age of person correct to month and date

#include<stdio.h> 
int main()
{
    int curdate,curmonth,curyear;
	int birthdate,birthmonth,birthyear;
    
    printf("enter the details\n********************************\n");
    printf("enter present date in format YY MM DD :\n");
    scanf("%d %d %d",&curyear,&curmonth,&curdate);
    
    printf("\nenter your date of birth in format YY MM DD :\n");
    scanf("%d %d %d",&birthyear,&birthmonth,&birthdate);
    
    
    //calculating based on certain conditions of birthday 
    if(birthmonth>curmonth)
    {
    	birthyear = (curyear - birthyear)-1;
    	birthmonth = curmonth;
    	if(birthdate == curdate)
    	      birthdate = 0;
    	else
    	{
    		if(birthdate>curdate)
    		{
    			birthdate = curdate;
			}
			
			else
			  birthdate = curdate - birthdate;
			
		}
	}
	else
	{
		if(birthmonth<curmonth)
		{
			birthyear = curyear - birthyear;
			birthmonth = curmonth - birthmonth;
			
		if(birthdate == curdate)
    	      birthdate = 0;
    	else
    	{
    		if(birthdate>curdate)
    		{
    			birthdate = curdate;
			}
			
			else
			  birthdate = curdate - birthdate;
			
		}
	  }
	  else
	  {
	  	birthyear = curyear - birthyear;
			birthmonth = 0;
			
		if(birthdate == curdate)
    	      birthdate = 0;
    	else
    	{
    		if(birthdate>curdate)
    		{
    			birthdate = curdate;
			}
			
			else
			  birthdate = curdate - birthdate;
			
		}
	  }
	}
    
    printf("\n Your %d years %d months %d days old.",birthyear,birthmonth,birthdate);
    
    return 0;
}