//program to count the occurence of each word in a sentence

#include<stdio.h>
#include<string.h>
#include<stdlib.h> 

//macro definition
#define maxword 100
#define maxwordlen 20

//function declaration
void tokenise(char *sentence,char (*arr)[maxword]);
void Wfilter(char (*arr1)[maxword], char (*arr2)[maxword]);

//global arrays declaration
char sentence[maxword],word[maxword][maxwordlen],filter[maxword][maxwordlen];
int wordcount[maxword],totalword=0;

int main()
{
  	int i,j;
  	
  	printf("Enter the sentence: ");
  	fgets(sentence,sizeof(sentence),stdin);
	  
	//separating words
	tokenise(sentence,word);
	
	//removing the doublicacy
	Wfilter(word,filter);
	
    printf("\nThe counting of each word: \n");		
    for(i=0;i<totalword;i++)
    {
    	printf("%s -- %d\n",filter[i],wordcount[i]);
	}
	
	return 0;
}

void tokenise(char *sentence,char (*arr)[maxword])
{
	int i=0,j=0,k=0;
	//char tonpa[5] = {'\0'};
	
    while(sentence[i]!='\0')
    {
    	 
         while(sentence[i]!=' ')
         {
         	arr[j][k] = sentence[i];
         	k++;
		 }
		 
		 if(k!=0)
		 {
		 	arr[j][k] = '\0';
		 	j++;
		 	totalword++;
		 	k=0;
		 }
		 
		 i++;
	}
	
	return;
}

void Wfilter(char (*arr1)[maxword],char (*arr2)[maxword])
{
	int i,j,k;
    int flag = 0;
	
	for(i=0;i<totalword;i++)
	{
		flag = 0;
		if(i<0)
		{
			for(j=i-1;j>=0;j--)
			{
				if(strcmp(arr1[i],arr2[j]))
				{
					wordcount[j]++;
					flag = 1;
				    break;
				}
		
			}
			
			if(flag == 0)
			{
				strcpy(filter[i],arr1[i]);
				wordcount[i] = 1;
			}
			
		}
		
		else
		{
			strcpy(filter[i],arr1[i]);
			wordcount[i] = 1;
		}
	}
	
	return;
}



