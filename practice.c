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
// #define PI 3.14159

// double calculateArea(double radius) {
//     return PI * radius * radius;
// }
// double calculateCircumference(double radius) {
//     return 2 * PI * radius;
// }
// int main() {
//     double radius, area, circumference;

//     printf("Enter the radius of the circle: ");
//     scanf("%lf", &radius);
    
//     area = calculateArea(radius);
//     circumference = calculateCircumference(radius);
    
//     printf("Area of the circle: %.2lf\n", area);
//     printf("Circumference of the circle: %.2lf\n", circumference);
    
//     return 0;
// }

// void swapByValue(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("Inside swapByValue: a = %d, b = %d\n", a, b);
// }
// void swapByReference(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int x, y;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);
//      printf("\nBefore swapping: x = %d, y = %d\n", x, y);

//     swapByValue(x, y);
//     printf("After swapByValue: x = %d, y = %d (No change in main)\n", x, y);

//     swapByReference(&x, &y);
//     printf("After swapByReference: x = %d, y = %d (Values swapped in main)\n", x, y);

//     return 0;
// }
// void insertElement(int arr[], int *size, int element, int position) {
//     if (position < 0 || position > *size) {
//         printf("Invalid position! Position should be between 0 and %d.\n", *size);
//         return;
//     }
//     for (int i = *size; i > position; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[position] = element;
//     (*size)++;
// }
// int main() {
//     int arr[100], size, element, position;
    
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
    
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to insert: ");
//     scanf("%d", &element);
    
//     printf("Enter the position (0 to %d): ", size);
//     scanf("%d", &position);

//     insertElement(arr, &size, element, position);
    
//     printf("Updated array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }
// void updateElement(int arr[], int size, int position, int newValue) {
//     if (position < 0 || position >= size) {
//         printf("Invalid position! Position should be between 0 and %d.\n", size - 1);
//         return;
//     }
//     arr[position] = newValue;
// }
// int main() {
//     int arr[100], size, position, newValue;
    
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
    
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the position to update (0 to %d): ", size - 1);
//     scanf("%d", &position);

//     printf("Enter the new value: ");
//     scanf("%d", &newValue);

//     updateElement(arr, size, position, newValue);
    
//     printf("Updated array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }


// void deleteElement(int arr[], int *size, int position) {
//     if (position < 0 || position >= *size) {
//         printf("Invalid position! Position should be between 0 and %d.\n", *size - 1);
//         return;
//     }
//     for (int i = position; i < *size - 1; i++) {
//         arr[i] = arr[i + 1];
//     }

//     (*size)--; 
// }
// int main() {
//     int arr[100], size, position;
    
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
    
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the position to delete (0 to %d): ", size - 1);
//     scanf("%d", &position);

//     deleteElement(arr, &size, position);

//     printf("Array after deletion: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }

// void displayArray(int arr[], int size) {
//     if (size == 0) {
//         printf("The array is empty.\n");
//         return;
//     }

//     printf("Array elements: [ ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("]\n");
// }

// int main() {
//     int arr[100], size;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     displayArray(arr, size);

//     return 0;
// }
// void searchElement(int arr[], int size, int key) {
//     int found = 0;
//     printf("Element %d found at index: ", key);
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == key) {
//             printf("%d ", i);
//             found = 1;
//         }
//     }
//     if (!found) {
//         printf("Not found");
//     }
//     printf("\n");
// }
// int main() {
//     int arr[100], size, key;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to search: ");
//     scanf("%d", &key);

//     searchElement(arr, size, key);

//     return 0;
// }
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum; // Return the sum of elements
}
int main() {
    int arr[100], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int result = sumArray(arr, size);
    printf("Sum of array elements: %d\n", result);

    return 0;
}
