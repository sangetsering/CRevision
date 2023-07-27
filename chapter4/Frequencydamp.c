//program to study the variation of damped natural frequency 

#include<stdio.h>
#include<math.h>

int main()
{
	float L,C,R,i=0.01,freq;
	
	printf("Enter the Inductance , Resistance:\n");
	scanf("%f %f",&L,&R);
	
	printf("The FREQUECY damped range from C = 0.01 to C = 0.1:\n\n");
	while(i<0.1)
	{ 
	   C = i;
	   	   
	   float temp = (1/(L*C))- (R*R/(4*C*C));
	   
	   if(temp<0)
	   {
	   	   printf("Frequency for %.2f is Not computable:\n",C);
	   	   i = i + 0.01;
	   	   continue;
	   }
	   
	   freq = sqrt(temp);
	   printf("Frequency for %.2f capacitance is %f Hrtz:\n",C,freq);
	   i = i + 0.01;
	}
	
	return 0;
}