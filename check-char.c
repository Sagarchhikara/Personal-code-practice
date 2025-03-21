#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit (0-9)
    if (ch >= '0' && ch <= '9') {
        printf("%c is a digit (0-9).\n", ch);
    }
    // Check if the character is an uppercase alphabet (A-Z)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is an alphabet.\n", ch);
    }
    // If it's neither a digit nor an alphabet, it's a special character
    else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
