// pointers are useful to access the elements of arrays.

// #include <stdio.h>
// int main () {
//     int myNumbers[4] = {1,2,3,4};
//     printf("%p",myNumbers);
//     printf("%p\n",&myNumbers[1]);
//     return 0;
// }

// access individual elements
// #include <stdio.h>
// int main () {
//     int myNumbers[4] = {1,2,3,4};
//     printf("%p",*(myNumbers+1));
//     printf("%p\n",*(myNumbers+2));
//     return 0;
// }

// access all elements of array
// #include <stdio.h>
// int main() {
//     int myNumbers[4]={25,50,75,100};
//     int *ptr=myNumbers;
//     int i;
//     for (i=0;i<4;i++) {
//         printf("%d\n",*(ptr+i));
//     }
//     return 0;
// }

// modifying array using pointer
// #include <stdio.h>
// int main() {
//     int myNumbers[4]={25,50,75,100};
//     *myNumbers=13;
//     *(myNumbers+1)=17;
//     printf("%d\n",*myNumbers);
//     printf("%d\n",*(myNumbers+1));
//     return 0;
// }

// passing arrays to function
// #include <stdio.h>
// void printarray(int *arr,int size) {
//     int i;
//     for (int i=0;i<size;i++) {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
// }
// int main() {
//     int numbers[]={1,2,3,4,5};
//     printarray(numbers,5);
//     return 0;
// }

// 2D arrays

// modifying an array
// #include <stdio.h>
// int main(){
//     int matrix[2][3]={{1,2,3},{4,5,6}};
//     matrix[0][0]=10;
//     matrix[0][1]=20;
//     matrix[0][2]=30;
//     printf("%d\n",matrix[0][0]);
//     printf("%d\n",matrix[0][1]);
//     printf("%d\n",matrix[0][2]);
//     return 0;
// }

// Operations on 2D arrays:
// 1. TRAVERSING - access elements row by row or column by column
// 2. MODIFICATION - change specific elements using indices or pointers

// sum of all elements of matrix
// #include <stdio.h>
// void main(){
//     int sum =0;
//     int matrix[2][3]={{1,2,3},{4,5,6}};
//     for(int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//             sum+=matrix[i][j];
//         }
//     }
//     printf("The sum of the elements of the matrix is %d\n",sum);
// }

// transpose of matrix
// void main(){
//     int transpose[3][2],matrix[2][3]={{1,2,3},{4,5,6}};
//     for(int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//             transpose[j][i]=matrix[i][j];
//         }
//     }
//     printf("The transpose of the matrix is:\n");
//     for(int i=0; i<3; i++){
//         for(int j=0; j<2; j++){
//             printf("%d ",transpose[i][j]);
//         }
//         printf("\n");
//     }
// }

// print array using pointer
// #include<stdio.h>
// int main(){
//     int matrix[2][3]={{1,2,3},{4,5,6}};
//     int (*ptr)[3]=matrix;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("%d",ptr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// POINTERS
// it is a variable which holds the address of another variable.
// Syntax : datatype *ptr-name
// TYPES : int,float,double,char

// Program to illustrate a pointer
// #include <stdio.h>
// int main() {
//     int *p,a;
//     printf("Enter the value of a\n");
//     scanf("%d",&a);
//     p = &a;
//     printf("Value of a is : %d\n",*p);     /* show a's value using p variable */
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int x = 10;int y = 20;
//     int *ptr 1 = &x;
//     int *ptr 2 = &y;
//     ptr1=ptr2;
//     printf("%d %d",*ptr1,*ptr2);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a = 25, b;
//     int *ptr,*ptr1;
//     ptr = &a;
//     ptr1 = &b;
//     b = 36;
//     printf("%d %d",*ptr,*ptr1);
//     return 0;
// }

// BENEFITS of using POINTERS
// 1. used to access the address of variable
// 2. more efficient in handling arrays in c nd structures in c
// 3. reduces length of program nd its execution time as well
// 4. allows C language to support dynamic memory management
// 5. pointers are dynamic variables
// 6. used for dynamic memory allocation
// 7. enables us to access a variable that is defined outside the function
// 8. more efficient in handling the data tables
// 9. used in data structures in linked organization of data.

// POINTER OPERATORS
// Two types of operator :
// 1. address operator (&) : used to find the address of any type of variable
// Syntax : pointer = &variable-name (address of variable)

// 2. dereference operator (*) : access the value of variable through its address / pointer.
// Syntax : *pointervariable

// POINTERS ARITHMETIC in C
// 1. increment (++) : p = p + sizeof(datatype)
// #include <stdio.h>
// int main() {
//     int a = 20;
//     int *p;     // pointer to an integer
//     p = &a;     // pointer stores the address of a
//     printf("Pointer before increment: ");
//     printf("%p\n",p);
//     p++;        // incrementing pointer ptr 1
//     printf("Pointer after increment: ");
//     printf("%p\n",p);
//     return 0;
// }

// eg :
// #include <stdio.h>
// int main() {
//     int x = 50;
//     int *ptr1= &x;
//     int *ptr2 = &x;
//     int y = ++*ptr2;     // increment the value of x through ptr2 and assign it to y
//     printf("%d %d",++*ptr1,y);
//     return 0;
// }

// 2. decrement (--) :
// #include <stdio.h>
// int main() {
//     int a = 20;
//     int *p;
//     p = &a;
//     printf("Pointer before decrement: ");
//     printf("%p\n",p);
//     p--;
//     printf("POinter after decrement: ");
//     printf("%p\n",p);
//     return 0;
// }

// 3. addition (+) : new_address = current_address + (number * size_of(data type))
// when a pointer is added with a value, the value is first multiplied by the size of data type and then added to the pointer

// #include <stdio.h>
// int main() {
//     int a = 50;
//     int b = 3;
//     int *p;
//     p = &b;
//     printf("Address of p variable is %u\n",p);
//     p = p+b;
//     printf("After adding 3: Address of p variable is %u\n",p);
//     return 0;
// }

// int main() {
//     int a = 50;
//     float b = 3;
//     float *p;
//     p=&b;
//     printf("Address of p variable is %u\n",p);
//     p = p+a;
//     printf("After adding 3: Address of p variable is %u\n",p);
//     return 0;
// }

// Program to add two numbers using pointers
// #include <stdio.h>
// int main() {
//     int num1, num2, sum;
//     int *ptr1,*ptr2;
//     ptr1=&num1;
//     ptr2=&num2;

//     printf("Enter any two numbers: ");
//     scanf("%d %d",ptr1,ptr2);

//     sum=*ptr1+*ptr2;
//     printf("Sum=%d",sum);
//     return 0;
// }

// 4. subtraction (-) :
// #include <stdio.h>
// int main() {
//     int num1, num2, difference;
//     int *ptr1,*ptr2;
//     ptr1=&num1;
//     ptr2=&num2;

//     printf("Enter any two numbers: ");
//     scanf("%d %d",ptr1,ptr2);

//     difference=*ptr1-*ptr2;
//     printf("Difference=%d",difference);
//     return 0;
// }

// NOTE : pointer can not be multiplied or divided

// 5. comparison (==) :
// #include <stdio.h>

// int main() {
//     int a, b;
//     int *ptr1, *ptr2;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     ptr1 = &a;
//     ptr2 = &b;

//     if (*ptr1 > *ptr2) {
//         printf("The larger number is: %d\n", *ptr1);
//     } else if (*ptr1 < *ptr2) {
//         printf("The larger number is: %d\n", *ptr2);
//     } else {
//         printf("Both numbers are equal.\n");
//     }

//     return 0;
// }

// MEMORY ALLOCATION FUNCTIONS:

// Dynamic Memory Allocation
// 1. malloc - allocates memory
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *arr;
//     int size = 5;
//     arr = (int *)malloc(size *sizeof(int));
//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     for (int i = 0;i<size;i++) {
//         arr[i] = i + 1;
//     }
//     for (int i = 0;i<size;i++) {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
//     free(arr);
//     return 0;
// }

// 2. calloc - allocates and initialize memory
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *arr;
//     int size = 5;
//     arr = (int *)calloc(size,sizeof(int));
//     if (arr==NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     for (int i = 0; i<size; i++) {
//         arr[i] = i + 1;
//     }
//     printf("Original array: \n");
//     for (int i = 0; i <size;i++) {
//         printf("%d",arr[i]);
//     }
//     size = 10;
//     arr = (int *)realloc(arr,size * sizeof(int));
//     if (arr == NULL) {
//         printf("Memory reallocation failed\n");
//         return 1;
//     }
//     for (int i = 5; i<size;i++) {
//         arr[i] = i+1;
//     }
//     printf("\nResized array: \n");
//     for (int i = 0;i<size;i++) {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
//     free(arr);
//     return 0;
// }

// sorting by dynamically allocating the memory
// #include <stdio.h>
// #include <stdlib.h>
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void bubbleSort(int *arr, int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(&arr[j], &arr[j + 1]);
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int *arr = (int *)malloc(n * sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }
//     printf("Enter %d elements: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     bubbleSort(arr, n);
//     printf("Sorted array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     free(arr);
//     return 0;
// }
// 3. realloc - resizes allocated memory

// 4. free - releases memory
// Dynamic memoery allocation in c
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *int_ptr=(int*)malloc(sizeof(int));
//     if (int_ptr==NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     *int_ptr=10;
//     printf(" Integer Value  : %d\n",*int_ptr);
//     printf(" Address of int_ptr : %p\n",int_ptr);
//     // allocate memory for char
//     char *char_ptr=(char*)malloc(sizeof(char));
//     if (char_ptr==NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     *char_ptr='A';
//     printf(" Character Value : %c\n",*char_ptr);
//     printf(" Address of char_ptr : %p\n",char_ptr);
//     // allocate memory for float

//     float *float_ptr=(float*)malloc(sizeof(float));
//     if (float_ptr==NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     *float_ptr=3.14;
//     printf(" Float Value : %f\n",*float_ptr);
//     printf(" Address of float_ptr : %p\n",float_ptr);
//     // free allocated memory
//     free(int_ptr);
//     free(char_ptr);
//     free(float_ptr);
//     return 0;

// }
// reallocating memory
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_INPUT_SIZE 1000  // Prevent unlimited memory allocation

// int main() {
//     char *text = NULL;
//     int size = 0;
//     int capacity = 0;
//     char ch;

//     // Start with an initial allocation
//     capacity = 16;
//     text = malloc(capacity * sizeof(char));
//     if (text == NULL) {
//         printf("Initial memory allocation failed\n");
//         return 1;
//     }

//     // Read input
//     while ((ch = getchar()) != '\n' && ch != EOF && size < MAX_INPUT_SIZE - 1)
//     {
//         // Grow buffer if needed
//         if (size + 1 >= capacity) {
//             capacity *= 2;
//             char *temp = realloc(text, capacity * sizeof(char));
//             if (temp == NULL) {
//                 printf("Memory reallocation failed\n");
//                 free(text);
//                 return 1;
//             }
//             text = temp;
//         }

//         text[size++] = ch;
//     }

//     // Null terminate
//     text[size] = '\0';

//     // Check if any input was received
//     if (size > 0) {
//         printf("You entered: %s\n", text);
//     } else {
//         printf("No input received\n");
//     }

//     free(text);
//     return 0;
// }
// // reallocating memory
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n,i;
//     int *arr;
//     int sum=0;
//     printf("Enter the number of elements: ");
//     scanf("%d",&n);
//     arr = (int *)malloc(n*sizeof(int));
//     if(arr==NULL){
//         printf("Memory not allocated\n");
//         return 1;
//     }
//     for(i=0;i<n;i++){
//         printf("Enter the element %d: ",i+1);
//         scanf("%d",&arr[i]);
//         sum+=arr[i];
//     }
//     printf("Sum = %d\n",sum);
//     sum=0;
//     arr=(int *)realloc(arr,n*sizeof(int));
//     if(arr==NULL){
//         printf("Memory not allocated\n");
//         return 1;
//     }
//     printf("Enter the new size of the array: ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Enter the element %d: ",i+1);
//         scanf("%d",&arr[i]);
//         sum+=arr[i];
//     }
//     printf("Sum = %d\n",sum);
//     free(arr);
// }
// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int *int_ptr;
//     int_ptr = (int *)malloc(sizeof(int));
//     if(int_ptr==NULL){
//         printf("Memory not allocated\n");
//         return 1;
//     }
//     *int_ptr = 50;
//     printf("Value of int_ptr: %d\n",*int_ptr);
//     printf("Address of int_ptr: %p\n",int_ptr);

//     //alocate memory for char_ptr
//     char *char_ptr=(char *)malloc(20*sizeof(char));
//     if(char_ptr==NULL){
//         printf("Memory not allocated\n");
//         return 1;
//     }
//     *char_ptr = 'A';
//     printf("Value of char_ptr: %c\n",*char_ptr);
//     printf("Address of char_ptr: %p\n",char_ptr);

//     //allocate memory for float_ptr
//     float *float_ptr = (float *)malloc(sizeof(float));
//     if(float_ptr==NULL){
//         printf("Memory not allocated\n");
//         return 1;
//     }
//     *float_ptr = 3.14;
//     printf("Value of float_ptr: %f\n",*float_ptr);
//     printf("Address of float_ptr: %p\n",float_ptr);
//     return 0;

// }
// adding two numbers by pasing argusments  to functions
// #include<stdio.h>
// int add(int *,int *);
// int main(){
//     int a=10,b=20;
//     int c=add(&a,&b);
//     printf("Sum of a and b is %d\n",c);
//     return 0;
// }
// int add(int *x,int *y){
//     return *x+*y;
// }
// Sum of digits using function
// #include<stdio.h>
// int sum(int a);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     printf("Sum of digits is %d\n",sum(n));
//     return 0;
// }
// int sum(int a){
//     if(a==0)
//         return 0;
//     else
//         return a%10+sum(a/10);
// }
// #include <stdio.h>
// int main(){
//     int r,c;
//     printf("Enter the number of rows and columns: \n");
//     scanf("%d%d",&r,&c);
//     int matrix[r][c];
//     printf("Enter the elements of the matrix: \n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("matrix[%d][%d]: ",i,j);
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     printf("The matrix is: \n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// multilication of two matrices
// int main(){
// int mat1[10][10], mat2[10][10], result[10][10];
// int r1, c1, r2, c2;
// printf("Enter rows and columns for first matrix: ");
// scanf("%d%d", &r1, &c1);

// printf("Enter rows and columns for second matrix: ");
// scanf("%d%d", &r2, &c2);
// if (c1 != r2)
// {
//     printf("Matrix multiplication not possible!\n");
//     return 0;
// }
// printf("Enter elements of first matrix:\n");
// for (int i = 0; i < r1; ++i)
// {
//     for (int j = 0; j < c1; ++j)
//     {
//         printf("mat1[%d][%d]: ", i, j);
//         scanf("%d", &mat1[i][j]);
//     }
// }
// printf("Enter elements of second matrix:\n");
// for (int i = 0; i < r2; ++i)
// {
//     for (int j = 0; j < c2; ++j)
//     {
//         printf("mat2[%d][%d]: ", i, j);
//         scanf("%d", &mat2[i][j]);
//     }
// }
// for (int i = 0; i < r1; ++i)
// {
//     for (int j = 0; j < c2; ++j)
//     {
//         result[i][j] = 0;
//     }
// }
// for (int i = 0; i < r1; ++i)
// {
//     for (int j = 0; j < c2; ++j)
//     {
//         for (int k = 0; k < c1; ++k)
//         {
//             result[i][j] += mat1[i][k] * mat2[k][j];
//         }
//     }
// }
// printf("Resultant matrix:\n");
// for (int i = 0; i < r1; ++i)
// {
//     for (int j = 0; j < c2; ++j)
//     {
//         printf("%d\t", result[i][j]);
//     }
//     printf("\n");
// }

// return 0;
// }
// Transpose of matrix 
// 
