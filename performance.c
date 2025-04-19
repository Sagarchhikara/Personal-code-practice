// write a c code to enter a 4 digit pin  maximum 3 attempts are allowed after 3 attempts if incorrect it should display incorrect pin try again 
// u have to enter the balance and enter the withdrawl amount condition withdrawl amout should be a multiple of 100 if error occurs it should display enter correct amoutn 
// if the withdrael exceeds the account balace it should display insufficent balance 
// for a sucessful trancation and print transcation sucessfull 
// #include <stdio.h>
// #include <stdbool.h>
// #define CORRECT_PIN 1234
// #define MAX_ATTEMPTS 3

// int main(){
//     int pin, attempts =0;
//     float balance, withdrawal_amount;
//     bool pin_verified=false;
//     while(attempts<MAX_ATTEMPTS){
//         printf("Enter your 4-digit Pin:");
//         scanf("%d",&pin);
//         if(pin==CORRECT_PIN){
//             pin_verified=true;
//             printf("Pin Correct:\n");
//             break;
//         }
//         else{
//             attempts++;
//             if(attempts<MAX_ATTEMPTS){
//                 printf("Incorrect pin. Please try again\n");
//             }
//         }
//     }
//     if(!pin_verified){
//         printf("Incorrect pin. You have exceede maximum attemps limit.\n");
//         return 1;
//     }
//     printf("Enter your account balance: ");
//     scanf("%f",&balance);
// while (true) {
//     printf("Enter withdrawal amount: ");
//     scanf("%f", &withdrawal_amount);
//     if ((int)withdrawal_amount % 100 != 0) {
//         printf("Error: Withdrawal amount must be a multiple of 100.\n");
//     } else if (withdrawal_amount > balance) {
//         printf("Error: Insufficient balance.\n");
//     } else {
//         float newbalance = balance - withdrawal_amount;
//         printf("Transaction successful!\n");
//         printf("Amount withdrawn: %.2f\n", withdrawal_amount);
//         printf("Remaining balance: %.2f\n", newbalance);
//         break;
//     }
//     printf("Please try again.\n");
// }
//     return 0;
// }
#include<stdio.h>

// int main(){
//     char ch;
    
//     printf("Enter a character: \n");
//     scanf("%c", &ch);
//     if(ch >= 'a' && ch <= 'z')
//     {
//         ch = ch - 32;
//         printf("Uppercase character is: %c", ch);
//     }
//     else
//     {
//         printf("Character is already in uppercase or not an alphabet.");
//     }
//     getch();    
//     return 0;
// }





















