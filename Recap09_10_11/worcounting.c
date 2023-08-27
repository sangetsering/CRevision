//program to count the occurence of each word in a sentence

#include<stdio.h>
#include<string.h>
#include<stdlib.h> 

//macro definition
#define maxword 100
#define maxwordlen 20

//sttucture
typedef struct 
{
    char word[maxwordlen];
    int count;
} word;

//function declaration
void tokenise(char *sentence, char words[][maxwordlen], int *wordcount);
void Wfilter(char words[][maxwordlen], int wordcount, word *filteredwords, int *filteredcount);


int main()
{
	char sentence[maxword];
	char words[maxword][maxwordlen];
	int wordcount =0;
	
	word filteredwords[maxword];
	int filteredcount = 0;
  	
  	printf("Enter the sentence: ");
  	fgets(sentence,sizeof(sentence),stdin);
	  
	//removing newline and repacing with NULL terminator
    sentence[strcspn(sentence, "\n")] = '\0';
    
	//separating words
	tokenise(sentence, words, &wordcount);
	
	//removing the doublicacy of word
	Wfilter(words, wordcount, filteredwords, &filteredcount);
	
    printf("\nThe counting of each word: \n");		
    for(int i=0;i<filteredcount;i++)
    {
    	printf("%s -- %d\n",filteredwords[i].word,filteredwords[i].count);
	}
	
	return 0;
}

void tokenise(char *sentence, char words[][maxwordlen], int *wordcount) 
{
    char *token = strtok(sentence, " ");

    while(token != NULL)
	{
        strcpy(words[*wordcount], token);
        (*wordcount)++;
        token = strtok(NULL, " ");
    }
}

void Wfilter(char words[][maxwordlen], int wordcount, word *filteredwords, int *filteredcount) 
{
    for(int i = 0; i < wordcount; i++)
	{
        int found = 0;
        for(int j = 0; j < *filteredcount; j++) 
		{
            if(strcmp(words[i], filteredwords[j].word) == 0)
			 {
                found = 1;
                filteredwords[j].count++;
                break;
            }
        }

        if(!found) 
		{
            strcpy(filteredwords[*filteredcount].word, words[i]);
            filteredwords[*filteredcount].count = 1;
            (*filteredcount)++;
        }
    }
}
