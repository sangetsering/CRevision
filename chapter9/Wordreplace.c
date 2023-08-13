#include <stdio.h>
#include <string.h>
#include <ctype.h>

void replaceWord(const char* src, const char* oldWord, const char* newWord, char result[])
{
    int index = 0;
    int srcLen = strlen(src);
    int oldWordLen = strlen(oldWord);
    int newWordLen = strlen(newWord);

    for (int i = 0; i < srcLen; i++)
	 {
        // Check if the current substring matches the old word
        int match = 1;
        for (int j = 0; j < oldWordLen; j++) 
		{
            if (tolower(src[i + j]) != tolower(oldWord[j]))
			 {
                match = 0;
                break;
            }
        }

        // If a match is found, replace the word
        if (match) 
		{
            strcpy(result + index, newWord);
            index += newWordLen;
            i += oldWordLen - 1; // Skip old word
        } else 
		{
            result[index++] = src[i];
        }
    }

    result[index] = '\0'; // Null-terminate the result
}

int main()
 {
    char str[] = "It is good to program in PASCAL language";
    char newString[1000];
    char oldWord[] = "pascal";
    char newWord[] = "C";

    replaceWord(str, oldWord, newWord, newString);
    printf("%s\n", newString);

    return 0;
}
