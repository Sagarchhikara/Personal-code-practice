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