//program to find the smallest word in a given sentence

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000], word[100], smallestWord[100];
    int i, j, len, wordLen;

    printf("Enter a sentence: ");
    gets(sentence);

    len = strlen(sentence);
    j = 0;
     wordLen = len;  // Initialize with maximum length

    for (i = 0; i < len; i++)
	 {
        if (sentence[i] != ' ' && sentence[i] != '\0')
		 {
            word[j++] = sentence[i];
        }
		 else 
		 {
            word[j] = '\0';

            if (j < wordLen)
			 {
                wordLen = j;
                strcpy(smallestWord, word);
            }
            j = 0;
        }
    }

    // Checking  the last word in the sentence (if there isn't a space at the end)
    if (j > 0)
	 {
        word[j] = '\0';
        if (j < wordLen) {
            strcpy(smallestWord, word);
        }
    }

    printf("Smallest word: %s\n", smallestWord);

    return 0;
}
 