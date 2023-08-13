//program to concatenate two strings

#include <stdio.h>

int main() 
{
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Removing newline character if it exists in the first string
    while (str1[i] != '\0') 
	{
        if (str1[i] == '\n') 
		{
            str1[i] = '\0';
            break;
        }
        i++;
    }

    // Copying the first string to the result
    for (int k = 0; k < i; k++) 
	{
        result[k] = str1[k];
    }

    // Removing newline character if it exists in the second string and appending it to result
    while (str2[j] != '\0')
	 {
        if (str2[j] == '\n')
		 {
            str2[j] = '\0';
            break;
        }
        result[i] = str2[j];
        i++;
        j++;
    }

    // Null terminate the resulting string
    result[i] = '\0';

    printf("Concatenated string: %s\n", result);

    return 0;
}
