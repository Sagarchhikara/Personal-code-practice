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
// int sumArray(int arr[], int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     return sum; // Return the sum of elements
// }
// int main() {
//     int arr[100], size;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int result = sumArray(arr, size);
//     printf("Sum of array elements: %d\n", result);

//     return 0;
// }
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int x = 10, y = 20;

//     printf("Before swapping:\n");
//     printf("x = %d, y = %d\n", x, y);

//     swap(&x, &y);

//     printf("\nAfter swapping:\n");
//     printf("x = %d, y = %d\n", x, y);

//     return 0;
// }
// Multiply two matrices
// int main() {
//     int mat1[10][10], mat2[10][10], result[10][10];
//     int r1, c1, r2, c2;
//     printf("Enter rows and columns for first matrix: ");
//     scanf("%d%d", &r1, &c1);

//     printf("Enter rows and columns for second matrix: ");
//     scanf("%d%d", &r2, &c2);
//     if (c1 != r2) {
//         printf("Matrix multiplication not possible!\n");
//         return 0;
//     }
//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c1; ++j) {
//             printf("mat1[%d][%d]: ", i, j);
//             scanf("%d", &mat1[i][j]);
//         }
//     }
//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < r2; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             printf("mat2[%d][%d]: ", i, j);
//             scanf("%d", &mat2[i][j]);
//         }
//     }
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             result[i][j] = 0;
//         }
//     }
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             for (int k = 0; k < c1; ++k) {
//                 result[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }
//     printf("Resultant matrix:\n");
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             printf("%d\t", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main() {
//     int matrix[10][10], transpose[10][10];
//     int rows, cols;

//     printf("Enter rows and columns of the matrix: ");
//     scanf("%d%d", &rows, &cols);

//     printf("Enter elements of the matrix:\n");
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             printf("matrix[%d][%d]: ", i, j);
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }

//     printf("\nOriginal Matrix:\n");
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             printf("%d\t", matrix[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nTransposed Matrix:\n");
//     for (int i = 0; i < cols; ++i) {
//         for (int j = 0; j < rows; ++j) {
//             printf("%d\t", transpose[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// int factorial(int n) {
//     if (n == 0 || n == 1)
//         return 1; // Base case
//     else
//         return n * factorial(n - 1); // Recursive call
// }

// int main() {
//     int num;

//     printf("Enter a number to find its factorial: ");
//     scanf("%d", &num);

//     if (num < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//     } else {
//         printf("Factorial of %d is %d\n", num, factorial(num));
//     }

//     return 0;
// }

// #include <string.h>
// #include <stdlib.h>

// // Function to reverse a string (as strrev is not standard C)
// void my_strrev(char *str) {
//     int length = strlen(str);
//     int i, j;
//     char temp;
    
//     for (i = 0, j = length - 1; i < j; i++, j--) {
//         temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }
// }

// int main() {
//     char str1[100], str2[100], result[200];
//     int choice, position, length;
    
//     while (1) {
//         printf("\n\n===== STRING FUNCTIONS MENU =====\n");
//         printf("1. strlen - Find the length of a string\n");
//         printf("2. strcpy - Copy one string to another\n");
//         printf("3. strcat - Concatenate two strings\n");
//         printf("4. strcmp - Compare two strings\n");
//         printf("5. strrev - Reverse a string\n");
//         printf("6. strstr - Find substring in a string\n");
//         printf("7. strchr - Find character in a string\n");
//         printf("8. strncpy - Copy n characters from one string to another\n");
//         printf("9. strncat - Concatenate n characters from one string to another\n");
//         printf("0. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
        
//         // Clear input buffer
//         while (getchar() != '\n');
        
//         switch (choice) {
//             case 1: // strlen
//                 printf("Enter a string: ");
//                 fgets(str1, sizeof(str1), stdin);
//                 str1[strcspn(str1, "\n")] = 0; // Remove trailing newline
                
//                 printf("Length of the string: %lu\n", strlen(str1));
//                 break;
                
//             case 2: // strcpy
//                 printf("Enter a string: ");
//                 fgets(str1, sizeof(str1), stdin);
//                 str1[strcspn(str1, "\n")] = 0;
                
//                 strcpy(str2, str1);
//                 printf("Copied string: %s\n", str2);
//                 break;
                
//             case 3: // strcat
//                 printf("Enter first string: ");
//                 fgets(str1, sizeof(str1), stdin);
//                 str1[strcspn(str1, "\n")] = 0;
                
//                 printf("Enter second string: ");
//                 fgets(str2, sizeof(str2), stdin);
//                 str2[strcspn(str2, "\n")] = 0;
                
//                 strcpy(result, str1);
//                 strcat(result, str2);
//                 printf("Concatenated string: %s\n", result);
//                 break;
                
//             case 4: // strcmp
//                 printf("Enter first string: ");
//                 fgets(str1, sizeof(str1), stdin);
//                 str1[strcspn(str1, "\n")] = 0;
                
//                 printf("Enter second string: ");
//                 fgets(str2, sizeof(str2), stdin);
//                 str2[strcspn(str2, "\n")] = 0;
                
//                 int cmp = strcmp(str1, str2);
//                 if (cmp == 0)
//                     printf("Strings are equal\n");
//                 else if (cmp < 0)
//                     printf("First string is lexicographically smaller than second\n");
//                 else
//                     printf("First string is lexicographically greater than second\n");
//                 break;
                
//             case 5: // strrev (custom implementation)
//                 printf("Enter a string: ");
//                 fgets(str1, sizeof(str1), stdin);
//                 str1[strcspn(str1, "\n")] = 0;
                
//                 strcpy(str2, str1); // Copy to preserve original
//                 my_strrev(str2);
//                 printf("Reversed string: %s\n", str2);
//                 break;
                
//             case 6: // strstr
//                 printf("Enter main string: ");
//                 fgets(str1, sizeof(str1), stdin);
//                 str1[strcspn(str1, "\n")] = 0;
                
//                 printf("Enter substring to find: ");
//                 fgets(str2, sizeof(str2), stdin);
//                 str2[strcspn(str2, "\n")] = 0;
                
//                 char *found = strstr(str1, str2);
//                 if (found)
//                     printf("Substring found at position: %ld\n", found - str1);
//                 else
//                     printf("Substring not found\n");
//                 break;
                
//             case 7: // strchr
//                 printf("Enter a string: ");
//                 fgets(str1, sizeof(str1), stdin);
//                 str1[strcspn(str1, "\n")] = 0;
                
//                 printf("Enter character to find: ");
//                 char ch = getchar();
                
//                 char *ch_found = strchr(str1, ch);
//                 if (ch_found)
//                     printf("Character found at position: %ld\n", ch_found - str1);
//                 else
//                     printf("Character not found\n");
//                 break;
                
//             case 8: // strncpy
//                 printf("Enter source string: ");
//                 fgets(str1, sizeof(str1), stdin);
//                 str1[strcspn(str1, "\n")] = 0;
                
//                 printf("Enter number of characters to copy: ");
//                 scanf("%d", &length);
//                 while (getchar() != '\n');
                
//                 strncpy(str2, str1, length);
//                 str2[length] = '\0'; // Ensure null termination
//                 printf("Copied string: %s\n", str2);
//                 break;
                
//             case 9: // strncat
//                 printf("Enter first string: ");
//                 fgets(str1, sizeof(str1), stdin);
//                 str1[strcspn(str1, "\n")] = 0;
                
//                 printf("Enter second string: ");
//                 fgets(str2, sizeof(str2), stdin);
//                 str2[strcspn(str2, "\n")] = 0;
                
//                 printf("Enter number of characters to concatenate: ");
//                 scanf("%d", &length);
//                 while (getchar() != '\n');
                
//                 strcpy(result, str1);
//                 strncat(result, str2, length);
//                 printf("Concatenated string: %s\n", result);
//                 break;
                
//             case 0: // Exit
//                 printf("Exiting program. Goodbye!\n");
//                 exit(0);
                
//             default:
//                 printf("Invalid choice! Please try again.\n");
//         }
//     }
    
//     return 0;
// }
// #include <string.h>

// int countSubstring(const char *str, const char *sub) {
//     int count = 0;
//     int subLen = strlen(sub);
    
//     // Return 0 if substring is empty or longer than the main string
//     if (subLen == 0) {
//         return 0;
//     }
    
//     // Search for occurrences of the substring
//     const char *pos = str;
//     while ((pos = strstr(pos, sub)) != NULL) {
//         count++;
//         pos += 1; // Move past the current match position to find the next occurrence
//     }
    
//     return count;
// }

// int main() {
//     char str[1000], sub[100];
    
//     // Get the main string from user
//     printf("Enter the main string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = 0; // Remove trailing newline
    
//     // Get the substring to search for
//     printf("Enter the substring to count: ");
//     fgets(sub, sizeof(sub), stdin);
//     sub[strcspn(sub, "\n")] = 0; // Remove trailing newline
    
//     // Count and display the occurrences
//     int occurrences = countSubstring(str, sub);
    
//     printf("The substring \"%s\" appears %d time(s) in the main string.\n", sub, occurrences);
    
//     return 0;
// }
// int sumOfDigits(int n) {
//     if (n == 0)
//         return 0;
//     else
//         return (n % 10) + sumOfDigits(n / 10);
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num < 0) {
//         num = -num;  // Handle negative numbers
//     }

//     int result = sumOfDigits(num);
//     printf("Sum of digits: %d\n", result);

//     return 0;
// }
// #include <stdio.h>
// struct Distance {
//     int feet;
//     float inches;
// };
// int main() {
//     struct Distance d1, d2, sum;

//     printf("Enter first distance:\n");
//     printf("Feet: ");
//     scanf("%d", &d1.feet);
//     printf("Inches: ");
//     scanf("%f", &d1.inches);

//     printf("\nEnter second distance:\n");
//     printf("Feet: ");
//     scanf("%d", &d2.feet);
//     printf("Inches: ");
//     scanf("%f", &d2.inches);

//     sum.feet = d1.feet + d2.feet;
//     sum.inches = d1.inches + d2.inches;

//     if (sum.inches >= 12.0) {
//         sum.inches -= 12.0;
//         sum.feet++;
//     }
//     printf("\nTotal distance = %d feet %.2f inches\n", sum.feet, sum.inches);

//     return 0;
// }

