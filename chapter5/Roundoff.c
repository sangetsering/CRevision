//program to roundoff the floating point number to the nearest greatest integers
#include<stdio.h>

//function to display the roundoff in horizontal bar with help of *
void bardisplay(void);
//global vaiable
float number;
int extra,result;

int main()
{
    //reading the number from user input   
    printf("Enter the floating number:\n");
    scanf("%f",&number);
    
    extra = (number - (int)number)*100;
    
    if(extra>50)
        result = (int)number+1;
    else
        result = (int)number;
        
    printf("%.4f to the nearest greatest integer: %d\n",number,result);
	printf("And representing the number in bars: \n\n");
	bardisplay();    
	
    return 0;
}

void bardisplay(void)
{
	int num,i,j;
	num = extra/10;
	
	for(i = 0;i<num;i++)
	{
		for(j = 0;j<result;j++)
		{
			printf("* ");
			
			if(i== num/2 && j == result - 1)
			   printf("%.3f",number);
			   
		}
		printf("\n");
	}
	
	return 0;
}