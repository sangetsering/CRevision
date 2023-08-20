//program to insert a word in the given word

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//function declaration 
void insert(char *, int, char *);

int main()
{
    char string1[50], string2[20];  // Increased the size of string1 to accommodate string2
    int index;

    printf("Enter the word: ");
    fgets(string1, sizeof(string1), stdin);
    strtok(string1, "\n");  // Remove newline character

    printf("\nEnter the word to be inserted: ");
    fgets(string2, sizeof(string2), stdin);
    strtok(string2, "\n");  // Remove newline character

    printf("\nEnter the index position to insert the element: ");
    scanf("%d", &index);

    insert(string1, index, string2);

    printf("\nString one after insertion of string two : %s", string1);
   
    return 0;
}

void insert(char *string1, int N, char *string2) 
{
    int i = N, a = 0;
    char temp[50] = {0};  // Initialize with zeros

    //breaking string1 into two
    while (*(string1 + i) != '\0')
	 {
   	  temp[a++] = *(string1 + i++);
    }

    *(string1 + N) = '\0';

    //attaching string 2
    strcat(string1, string2);
     
    //attaching the lower part of string1
    strcat(string1, temp);

    return;
}
