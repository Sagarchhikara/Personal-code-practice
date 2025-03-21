// #include <stdio.h>

// int main() {
//     int num, sum = 0, digit;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     while (num > 0) {
//         digit = num % 10; // Extract last digit
//         sum += digit;     // Add to sum
//         num /= 10;        // Remove last digit
//     }
//     char alphabet = ((sum - 1) % 26) + 'A';
//     printf("Sum of digits: %d\n", sum);
//     printf("Corresponding alphabet: %c\n", alphabet);

//     return 0;
// }
#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int original = num, reversed = 0, digit;

    while (num > 0) {
        digit = num % 10;           // Extract last digit
        reversed = reversed * 10 + digit; // Build reversed number
        num /= 10;                  // Remove last digit
    }

    return (original == reversed); // Check if original and reversed are same
}

int main() {
    int start, end;

    // Input range
    printf("Enter the start of range: ");
    scanf("%d", &start);
    printf("Enter the end of range: ");
    scanf("%d", &end);

    // Print palindrome numbers in the range
    printf("Palindrome numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

