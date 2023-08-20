//program to convert lower cse letter into upper case

#include <stdio.h>
#include <stdbool.h>

bool isLower(char ch)
{
    return ch >= 'a' && ch <= 'z';
}

char toUpper(char ch)
{
    if (isLower(ch))
    {
        return ch - 'a' + 'A';
    }
    return ch;
}

void convertToUpper(char str[])
 {
    for (int i = 0; str[i] != '\0'; i++)
	 {
        str[i] = toUpper(str[i]);
    }
}

int main()
{
    char input[100];

    printf("Enter a string: ");
    gets(input);  // Note: gets() is considered unsafe, consider using fgets() for safer alternatives.

    convertToUpper(input);

    printf("Converted string: %s\n", input);

    return 0;
}
