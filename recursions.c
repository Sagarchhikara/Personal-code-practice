#include<stdio.h>
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
int sumofd(int n){
    if (n==0){
        return 0;
    }
    return (n%10)+sumofd(n/10);
    
}

int main() {
    int n;
    printf("enter your number:");
    scanf("%d",&n);
    int result=sumofd(n);
    printf("The sum of digits is %d",result);
    
   
    return 0;
}