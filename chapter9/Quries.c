//program to Ask question

#include<stdio.h>
#include<string.h>
#include<ctype.h>

//function to convert the first letter into upper case and rest into lower case
void caseconvert(char *);

int main()
{
	char Answer[25];
	int attempt = 1;
	
	printf("Who is the inventor of C language?");
	gets(Answer);
	//converting in lower case
    caseconvert(Answer);
	
	while(attempt <=3)
	{	
		if(strcmp(Answer,"dennis ritchie") == 0)
		{
		   printf("\nGood correct on your %d attempt:",attempt);
	       return 0;
		}
		
		printf("\n %d more chance:",3-attempt);
		gets(Answer);
		
		attempt++;
	}
	
	printf("\nCorrect answer : Dennis Ritchie");
	return 0;
}

void caseconvert(char *answer)
{
	int i=0;
	
	while(*(answer+i) != '\0')
	{
	   if(isupper(*(answer+i)))
	   {
	   	 *(answer+i) = tolower(*(answer+i));
	   }	
	   
	  // printf("%c",*(answer+i));  to check the program working
	   i++;
	}
	
	return;
}