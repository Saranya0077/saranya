#include <stdio.h>

int main() {
    char ch;
    printf("Enter an uppercase alphabet: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        char small = ch + 32;  
        printf("Lowercase: %c\n", small);
    } else {
        printf("Not an uppercase alphabet\n");
    }

    return 0;
}
