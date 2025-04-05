#include <stdio.h>
#include <math.h>

// int is_prime(int n) {
//     if (n < 2) return 0;
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) return 0;
//     }
//     return 1;
// }
// int is_armstrong(int n) {
//     int sum = 0, temp = n, digits = 0;
//     while (temp > 0) {
//         digits++;
//         temp /= 10;
//     }
//     temp = n;
//     while (temp > 0) {
//         int digit = temp % 10;
//         sum += pow(digit, digits);
//         temp /= 10;
//     }
//     return (sum == n);
// }
// int is_perfect(int n) {
//     int sum = 0;
//     for (int i = 1; i < n; i++) {
//         if (n % i == 0) {
//             sum += i;
//         }
//     }
//     return (sum == n);
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (is_prime(num))
//         printf("%d is a Prime number.\n", num);
//     else
//         printf("%d is not a Prime number.\n", num);

//     if (is_armstrong(num))
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);

//     if (is_perfect(num))
//         printf("%d is a Perfect number.\n", num);
//     else
//         printf("%d is not a Perfect number.\n", num);

//     return 0;
// }
#define PI 3.14159

double calculateArea(double radius) {
    return PI * radius * radius;
}
double calculateCircumference(double radius) {
    return 2 * PI * radius;
}
int main() {
    double radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    area = calculateArea(radius);
    circumference = calculateCircumference(radius);
    
    printf("Area of the circle: %.2lf\n", area);
    printf("Circumference of the circle: %.2lf\n", circumference);
    
    return 0;
}

