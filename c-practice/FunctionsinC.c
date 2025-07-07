// FUNCTION : group of statements or a block of code used to perform a particular task.
// eg: add(),sub(),sqrt(),area(),etc.
// Advantages: 1. Modularity - divide a large program into more separate functions.
// 2. Code Reusability - call a function any number of times.
// 3. Debugging becomes easy
// 4. Easy modification

// Types of Functions:
// 1. Standard Library Functions / Predefined Functions / Built in Functions : Available in Header files
// 2. User defined : Defined by user


// LIBRARY FUNCTIONS - collection of built-in functions which perform some standard and predefined tasks
//Advantage : 1. No need to write the code 
//2. Can be called anywhere in the program
//3. optimized for performance
//4. saves considerable development time
//5. functions are portable

//Standard Library functions : stdio.h , conio.h , string.h , math.h , time.h , ctype.h , stdlib.h

// To convert upper to lower and lower to upper we can use 'tolower' and 'toupper' funtion  [c.type]


// 1. math.h header file 

// sqrt question
//C program to demonstarte example of floor and ceil functions
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float val;
//     float fVal,cVal;
//     printf("Enter a float value: ");
//     scanf("%f",&val);

//     fVal=floor(val);
//     cVal=ceil(val);
//     printf("floor value:%f\n",fVal);
//     printf("ceil value:%f\n",cVal);
// return 0;
// }


// 2. ctype.h header file

//Program for checking upper or lower case
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char ch;
//     print("Enter a char: ");
//     scanf("%c",&ch);
//     if(islower(ch)) {
//         printf("Lower case");
//     }
//     else if(isupper(ch)) {
//         printf("Upper case");
//     }
//     return 0;
// }

//to lower case
// #include <stdio.h>
// #include <ctype.h>
// int main() {
//     char ch = tolower("M");
//     printf("%c",ch);
//     return 0;
// }

//to upper case
// #include <stdio.h>
// #include <ctype.h>
// int main() {
//     char ch = toupper("m");
//     printf("%c",ch);
//     return 0;
// }


// 3. stdlib.h header file

// Program for absolute number
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int value;
//     printf("Enter a number: \n");
//     scanf("%d",&value);
//     printf("Absolute value=%d",abs(value));
//     return 0;
// }

// 4. time.h header file
//returns current date and time

// C program to print current date and time
// #include <stdio.h>
// #include <time.h>
// int main() {
//     time_t curtime;
//     time(&curtime);
//     printf("Current time = %s",ctime(&curtime));
//     return 0;
// }



// USER DEFINED FUNCTIONS - created by the programmer
// To use user defined following components are required:
// 1. Function prototype / declaration / initialisation : the declaration of a function that specifies function's name,parameters and return type . Doesn't contain function body
// Syntax:  return_type function_name(parameter list)

// 2. Function Definition : contains a block of code to perform specific task.
// Synatx : return_type function_name(parameter list) { body of the function }

// 3. Funtion Calling : can be called from anywhere . Control of program is transferred to the user-defined function by calling it.
// Syntax : function_name(arguement_list);

//IMPORTANT : we must pass the same number of functions in all the three steps given above

// #include <stdio.h>
// int add(int a,int b);  // function prototype (semicolon lgta hai)
// int main() {
//     int res;
//     res=add(10,20);    // function call
//     printf("The addition is %d", res);
//     return 0;
// }
// int add(int a, int b) // function definition (semicolon nhi lgta hai)
// {
//     int c;
//     c=a+b;
//     return(c);
// }

// Question 1.  write a c program to calculate the area of the square using the function.
// #include <stdio.h>
// int square_area();
// int main() {
//     printf("Going to calculate the area of the square\n");
//     float area = square_area();
//     printf("The area of the square: %f\n",area);
// }
// int square_area() {
//     float side;
//     printf("Enter the length of the side in meters: ");
//     scanf("%f",&side);
//     return side * side;
// }

// Question 2. write a c program to calculate simple interest using the function 
// #include <stdio.h>
// float simp_interest(float p, float r, float t) {
//     return (p * r * t) / 100;
// }

// int main() {
//     float p, r, t;
//     printf("Enter the principal amount: ");
//     scanf("%f", &p);
//     printf("Enter the rate of interest: ");
//     scanf("%f", &r);
//     printf("Enter the time period (in years): ");
//     scanf("%f", &t);
//     printf("The simple interest is: %.2f\n", simp_interest(p, r, t));
//     return 0;
// }

// Question 3. write a c program to check the given number is prime or not using the function
// #include <stdio.h>
// int is_prime(int num) {
//     int i;
//     for(i=2;i<=num/2;i++) {
//         if(num%i==0) {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     if(is_prime(num)) {
//         printf("The number is prime\n");
//     }
//     else {
//         printf("The number is not prime\n");
//     }
//     return 0;
// }



// FUNCTION SCOPE - region of the program where a defined variable can have its existence and beyond that variable cannot be accessed.
// 1. Local Scope : inside a function or a block which is called local variable
// 2. Global Scope : outside of all functions which is called global variable
// Block Level Scope : restricts the variable that is declared inside a specific block , from access by the code outside the block.
// Function scope begins at the opening of the function and ends at the closing of the function.

// LOCAL VARIABLE - declared inside a function and can be accessed only within that function.
// can only be accessed within the function in which they are declared.
// the lifetime of a local variable is limited to the function in which it is declared.
// local variables are not initialized by default.
// local variables are stored in the stack memory.
// GLOBAL VARIABLE - declared outside of all functions and can be accessed from any function in the program.
// can be accessed from any function in the program.
// the lifetime of a global variable is the entire program.
// global variables are initialized by default.


// Question. Write a c program to declare r=two global variables, assign or read the values of them in main() and add them in add() function.
// #include <stdio.h>
// int a=10,b=20;
// int add();
// int main() {
//     printf("The value of a and b in main() is %d and %d\n",a,b);
//     int sum = add();
//     printf("The sum of a and b in add() is %d\n",sum);
//     return 0;
// }
// int add() {
//     printf("The value of a and b in add() is %d and %d\n",a,b);
//     return a+b;
// }


// enter the number in array and find out even numbers in an array
// #include <stdio.h>
// int isEven(int num) {
//     return num % 2 == 0;
// }
// int main() {
//     int n,i;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of the array: ");
//     for(i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     printf("The even numbers in the array are: ");
//     for(i=0;i<n;i++) {
//         if(isEven(arr[i])) {
//             printf("%d ",arr[i]);
//         }
//     }
//     return
// }

// odd numbers
// #include <stdio.h>
// int isOdd(int num) {
//     return num % 2 != 0;
// }
// int main() {
//     int n,i;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of the array: ");
//     for(i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     printf("The odd numbers in the array are: ");
//     for(i=0;i<n;i++) {
//         if(isOdd(arr[i])) {
//             printf("%d ",arr[i]);
//         }
//     }
//     return 0;
// 
