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
// pointer increment 
#include <stdio.h>

    // int a=20;
    // int *p;
    // p=&a;
    // printf("Address of a : %u\n",p);
    // p++;
    // printf("Address of a : %u\n",p);
    // return 0;
// }
// int x=50;
// int *p1=&x;
// int *p2=&x;
// int y=++*p2;
// printf("%d %d\n",++*p1,y);
// return 0;

// int main(){
//     int num1,num2,sum;
//     int *ptr1,*ptr2; 
//     ptr1=&num1;
//     ptr2=&num2;
//     printf("Enter the first number\n");
//     scanf("%d",ptr1);
//     printf("Enter the second number\n");
//     scanf("%d",ptr2);
//     sum=*ptr1+*ptr2;    
//     printf("The sum of the two numbers is %d\n",sum);
//     return 0;
// }
// comparison of two number using pointers 
// int main(){
//     int num1,num2;
//     int *ptr1,*ptr2;
//     ptr1=&num1;
//     ptr2=&num2;
//     printf("Enter the first number\n");
//     scanf("%d",ptr1);
//     printf("Enter the second number\n");
//     scanf("%d",ptr2);
//     if(*ptr1>*ptr2){
//         printf("The first number is greater\n");
//     }
//     else if(*ptr1<*ptr2){
//         printf("The second number is greater\n");
//     }
//     else{
//         printf("Both the numbers are equal\n");
//     }
//     return 0;
// }
// dynamic memory allocation
// #include <stdio.h>
// int main(){
//     int *arr;
//     int size=5;
//     arr=(int*)malloc(size*sizeof(int));
//     for(int i=0;i<size;i++){
//         printf("Enter the element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("\nThe elements are:\n");
//     for(int i=0; i<size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     free(arr); // Free the dynamically allocated memory
//     return 0;
// }
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *arr;
//     int size=5;
//     arr=(int*)calloc(size,sizeof(int));
//     for(int i=0;i<size;i++){
//         printf("Enter the element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("\nThe elements are:\n");
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//         }
//     printf("\n");
//     size=10;
//     arr=(int*)realloc(arr,size*sizeof(int));
//     for(int i=0;i<size;i++){
//         printf("Enter the element %d: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("\nThe elements are:\n");
//     free(arr);
//     return 0;

// }

// Dynamic array allocation and sorting
#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    int *arr;

    // Get array size from user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check if size is valid
    if (size <= 0) {
        printf("Invalid array size!\n");
        return 1;
    }

    // Dynamically allocate memory
    arr = (int *)malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Get array elements from user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print original array
    printf("\nOriginal array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort the array
    bubbleSort(arr, size);

    // Print sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);
    return 0;
}
