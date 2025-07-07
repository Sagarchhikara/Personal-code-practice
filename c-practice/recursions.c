#include <stdio.h>
// for fibonnacci series
// int fact(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     }
//     int result = n * fact(n - 1);
//     return result;
//     // Add further logic for the factorial calculation if needed
// }
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int result = fact(n);
//     printf("Factorial of %d is %d\n", n, result);
//     return 0;
// }
// Sum of digits
#include <stdio.h>
int sumofd(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + sumofd(n / 10);
}

int main()
{
    int n;
    printf("enter your number:");
    scanf("%d", &n);
    int result = sumofd(n);
    printf("The sum of digits is %d", result);

    return 0;
}
// printing nmber 1 to n
#include <stdio.h>
int printnos(int n)
{
    if (n == 0)
        return 0;
    printnos(n - 1);
    printf("%d\n", n);
}

int main()
{
    int n;
    printf("enter your number:");
    scanf("%d", &n);
    int result = printnos(n);
    printf("%d", result);

    return 0;
}
//  Counting digits
#include <stdio.h>

int countDigits(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int main()
{
    printf("Digits: %d", countDigits(98765));
    return 0;
}
// reversing a number
#include <stdio.h>

int revhelper(int n, int rev)
{
    if (n == 0)
        return rev;
    int digit = n % 10;
    rev = rev * 10 + digit;
    return revhelper(n / 10, rev);
}
int revnum(int n)
{
    return revhelper(n, 0);
}
int main()
{
    int n;
    printf("Enter your number");
    scanf("%d", &n);
    int result = revnum(n);
    printf("The reverse number is:%d", result);
    return 0;
}
// checking if palindrome 
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[], int start, int end) {
    if (start >= end)
        return true;

    if (str[start] != str[end])
        return false;

    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
// findin Gcd of a number 
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD is: %d\n", gcd(a, b));
    return 0;
}
// finding lcm of a number
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("LCM is: %d\n", lcm(a, b));
    return 0;
}
