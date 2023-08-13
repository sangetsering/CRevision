//progam to find largest and smallest word in given string

#include <stdio.h>
#include <string.h>

int main() {
    char str[500], smallest[500], largest[500], current[500];
    int smallestLength = 500, largestLength = 0;
    int strLength, i, currentLength, start, end;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if it exists
    strLength = strlen(str);
    if (strLength > 0 && str[strLength - 1] == '\n') {
        str[strLength - 1] = '\0';
        strLength--;
    }

    start = 0;
    for (i = 0; i <= strLength; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i;
            currentLength = end - start;

            strncpy(current, &str[start], currentLength);
            current[currentLength] = '\0';

            // Check if current word is smaller than smallest found so far
            if (currentLength < smallestLength) {
                smallestLength = currentLength;
                strcpy(smallest, current);
            }

            // Check if current word is larger than largest found so far
            if (currentLength > largestLength) {
                largestLength = currentLength;
                strcpy(largest, current);
            }

            // Update start position for next word
            start = i + 1;
        }
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}
