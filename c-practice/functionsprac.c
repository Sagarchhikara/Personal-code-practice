// input some numbers in an array find out even numbers in a array
//#include <stdio.h>
// int isEven(int num)
// {
//     return num % 2 == 0;
// }
// int main(){
//     int n, i;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Even numbers in the array are:\n");
//     for (i = 0; i < n; i++) {
//         if (isEven(arr[i])) {
//             printf("%d ", arr[i]);
//         }
//     }
    
//     return 0;
// }
// 
// 
// 
// #include <stdio.h>
// int fibbonaci(int n)
// {
//     if (n == 1 || n == 2)
//     {
//         return n - 1;
//     }
//     else
//     {
//         return fibbonaci(n - 1) + fibbonaci(n - 2);
//     }
// }
// int main(){
//     int n, i;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Fibbonaci series is:\n");
//     for (i = 0; i < n; i++) {
//         arr[i] = fibbonaci(i + 1);
//         printf("%d ", arr[i]);

//     }
    
// 
// #include <stdio.h>

// // Recursive function to reverse the array
// void reverseArray(int arr[], int start, int end) {
//     // Base case: stop when start >= end
//     if (start >= end) {
//         return;
//     }
    
//     // Swap the elements at start and end
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
    
//     // Recursively call the function for the next pair
//     reverseArray(arr, start + 1, end - 1);
// }

// int main() {
//     int size;
    
//     // Get the size of the array from the user
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
    
//     int arr[size];
    
//     // Get the elements of the array from the user
//     printf("Enter %d numbers:\n", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     // Reverse the array using recursion
//     reverseArray(arr, 0, size - 1);
    
//     // Print the reversed array
//     printf("Reversed array:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     return 0;
// }
// 
// 
// #include <stdio.h>
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         arr[i]=i*10;
//     }
//     printf("The elements of the array are:\n");
//     for(int i=0;i<5;i++){
//         printf("%d\n",arr[i]);
//     }
// }
// #include <stdio.h>
// void printarray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         printf("%d\n",arr[i]);
//     }
// }
// int main(){
//     int numbers[]={10,20,30,40,50};
//     printarray(numbers,5);
//     return 0;
// }
// #include <stdio.h>
// int printsum(int a){
//     if (a>0){
//         return a+printsum(a-1);
//     }
//     else{
//         return 0;
//     }
// }
// int main (){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The sum of the numbers is %d",printsum(n));
//     return 0;
// }
// find the factorial 
// #include <stdio.h>
// int findfactorial(int a){
//     if(a>0){
//         return a*findfactorial(a-1);
//     }
//     else{
//         return 1;
//     }
// }
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The factorial of the number is %d",findfactorial(n));
//     return 0;
// }
// fibonnaci series
// #include <stdio.h>
// int fibseries(int n){
//     if(n==1||n==2){
//         return n-1;
//     }
//     else{
//         return fibseries(n-1)+fibseries(n-2);
//     }
// }
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The fibonnaci series is %d",fibseries(n));
//     return 0;
// }
// #include <stdio.h>
// int findsum(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return (n%10)+findsum(n/10);
//     }
// }
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The sum of the digits is %d",findsum(n));
//     return 0;
// }
#include <stdio.h>
#include <string.h>
void reversestring(char str[],int start, int end){
    if (start>=end){
        return;
    }
    else{
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        reversestring(str,start+1,end-1);
    }
}
int main(){
    char str[100];
    printf("Enter the string: ");
    gets(str);
    reversestring(str,0,strlen(str)-1);
    printf("The reversed string is %s",str);
    return 0;
}
