//program to convert roman into decimal number
#include <stdio.h>
#include <string.h>

int romanToDecimal(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int main() {
    char roman[100];
    int i, decimal = 0;

    printf("Enter a Roman numeral: ");
    scanf("%s", roman);

    for (i = 0; i < strlen(roman); i++) {
        int value1 = romanToDecimal(roman[i]);

        if (i + 1 < strlen(roman)) {
            int value2 = romanToDecimal(roman[i + 1]);

            if (value1 < value2) {
                decimal += value2 - value1;
                i++; // skip the next numeral since we've combined two
            } else {
                decimal += value1;
            }
        } else {
            decimal += value1;
        }
    }

    printf("Decimal value: %d\n", decimal);

    return 0;
}
