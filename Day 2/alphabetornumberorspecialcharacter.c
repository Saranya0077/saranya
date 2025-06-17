#include <stdio.h>

int main() {
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);  

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("This is an Alphabet");
    } else if (ch >= '0' && ch <= '9') {
        printf("This is a Number");
    } else {
        printf("Special Character");
    }

    return 0;
}
