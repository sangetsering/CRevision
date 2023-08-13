//program to print ASCII character value eqavalent to the character of given string
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    // Get the name from the user
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if it exists
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    // Print ASCII values of each character in the name
    printf("ASCII values for each character:\n");
    for (int i = 0; i < strlen(name); i++) {
        printf("'%c': %d\n", name[i], name[i]);
    }

    return 0;
}
