//program to check the presence of one character in a word

#include <stdio.h>
#include <stdbool.h>

bool checkCharacterPresence(char word[], char ch) 
{
    for (int i = 0; word[i] != '\0'; i++) 
	{
        if (word[i] == ch) 
		{
            return true;
        }
    }
    return false;
}

int main() 
{
    char word[100];
    char ch;

    printf("Enter a word: ");
    scanf("%s", word);

    printf("Enter the character to check: ");
    getchar();  // Clearing buffer to ensure next character is read correctly
    scanf("%c", &ch);

    if (checkCharacterPresence(word, ch)) 
	{
        printf("The character '%c' is present in the word '%s'.\n", ch, word);
    } 
	else 
	{
        printf("The character '%c' is not present in the word '%s'.\n", ch, word);
    }

    return 0;
}
