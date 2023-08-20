//program to count the ocurence of each word in a sentence

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define Maxword 100
#define Maxwordlen 20

// Global and function declaration
int check(char words[Maxword][Maxwordlen],int len, char *word);

int main()
{
   char sentence[1000];
   char words[Maxword][Maxwordlen];
   int wordcount[Maxword] = {0};
   int i,j,totalword = 0;
   
   printf("Enter the sentence: ");
   fgets(sentence,sizeof(sentence),stdin);
   
   // tokennization
   char *token = strtok(sentence, " \n");
   while(token && totalword < Maxword)
	{
		strcpy(words[totalword],token);
		totalword++;
		token = strtok(NULL," \n");
	}
	
	//counting the occurrence of word
	for(i = 0; i< totalword; i++)
	{
		if(!check(words,i,words[i]))
		{
			for(j = 0; j<totalword;j++)
			{
				if(strcmp(words[i],words[j])==0)
				{
					wordcount[i]++;
				}
			}
		}
	}
	
	//printing the words and its occurence
	
	for(i=0; i<totalword;i++)
	{
		if(wordcount[i]!=0)
		{
			printf("%s: %d\n",words[i],wordcount[i]);
		}
	}
	return 0;
}

int check(char words[Maxword][Maxwordlen],int len, char *word)
{
	for(int i = 0;i<len; i++)
	{
	   if(strcmp(words[i],word)==0)
   	      return 1;
   }
   
   return 0;
}
