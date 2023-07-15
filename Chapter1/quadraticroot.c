//program to print the roots of quadratics equation 

#include<stdio.h>
#include<math.h>

int main()
{
	int flag=0;
	int a,b,c,D;
	float x1,x2;
	
	printf("enter the coefficient of quadratics equation:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	//computing the discriminante
    D = b*b - 4*a*c;

    if(D==0)
	{
	  x1 = (-b)/(2*a);
	  x2 = (-b)/(2*a);
	  flag = 1;
	}
	else
	{
		if(D>0)
	    {
	    	x1 = (-b + sqrt(D))/(2*a);
	    	x2 = (-b - sqrt(D))/(2*a);
		    flag = 2;
		}
		else
		{
			D = -(D);
			x1 = (-b + sqrt(D))/(2*a);
	    	x2 = (-b - sqrt(D))/(2*a);
	    	flag = 3;
		}
	}    

	
	if(flag == 1)
	{
	   printf("\nRoots are equal such that :");
	   printf("%.0f %.0f",x1,x2);
    }
    else
    {
    	if(flag == 2)
    	{
	       printf("\nRoots are not equal such that :");
	       printf("%.2f %.2f",x1,x2);
        }
        
        else
        {
	      printf("\nRoots are imaginary such that :");
	      printf("%.2fi %.2fi",x1,x2);
		}
	}
}