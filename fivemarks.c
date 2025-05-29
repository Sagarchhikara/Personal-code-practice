#include <stdio.h>
// int main()
// {
//     int n,bonus;
//     int total=0;
//     printf("Enter No of days:\n");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         printf("Enter hours of Day %d:",i);
//         scanf("%d",&bonus);
//         total+=bonus;
//     }
//     printf("Total=%d",total);
//     return 0;
// }
// static int total_overtime = 0;
// // Function to track employee overtime hours
// void trackOvertime(int hours)
// {
//     // Static variable to retain overtime hours across function calls
//     total_overtime += hours; // Update total overtime
// }
// // Function to return the total overtime hours
// int getTotalOvertime()
// {
//     extern int total_overtime; // Accessing static variable
//     return total_overtime;
// }

// int main()
// {
//     int N, hours;
//     int total = 0;

//     // Read the number of days overtime was recorded
//     scanf("%d", &N);

//     // Process each day's overtime hours
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &hours);
//         trackOvertime(hours);
//         total += hours;
//     }

//     // Print final total overtime hours
//     printf("%d\n", total);

//     return 0;
// }
// Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     int n,views[10];
//     printf("Enter the Number of videos:\n");
//     scanf("%d",&n);bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
//     for(int i=0;i<=n;i++){
//         printf("Enter the views of %d:",i);
//         scanf("%d",&views[i]);
//     }
//     for(int i=0;i<=n;i++){
//         for(int j=)
//     }
//     for(int i=0;i<=n;i++){
//         printf("%d",views[i]);
//     }
//     if(n<=5){
//         for(int i=0;i<=5;i++){
//             printf("%d",views[i]);

//         }
//     }
//     return 0;
// }
// Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     // Write C code here
//     int n;
//     int views;
//     int total=0;
//     printf("Enter your number of days:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&views);
//         total+=views;
//     }
//     printf("%d",total);

//     return 0;
// }
// Online C compiler to run C program online

// void findtempratureanalysis(int temp[7][3])
// {
//     float avg[7];
//     int hottestday = 0, coldestday = 0;
//     float maxavg = -1000, minavg = 1000;
//     for (int i = 0; i < 7; i++)
//     {
//         float sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum += temp[i][j];
//         }
//         avg[i] = sum / 3;
//         printf("%.1f\n", avg[i]);
//         if (avg[i] > maxavg)
//         {
//             maxavg = avg[i];
//             hottestday = i + 1;
//         }
//         if (avg[i] < minavg)
//         {
//             minavg = avg[i];
//             coldestday = i + 1;
//         }
//     }
//     if (maxavg != minavg)
//     {
//         printf("%d\n", hottestday);
//         printf("%d", coldestday);
//     }
//     else
//     {
//         printf("Stable Weather throughtout the weej");
//     }
// }
// int main()
// {
//     int temp[7][3];
//     for (int i = 0; i < 7; i++)
//         for (int j = 0; j < 3; j++)
//             scanf("%d", &temp[i][j]);

//     findtempratureanalysis(temp);

//     return 0;
// }
// // Online C compiler to run C program online
// #include <stdio.h>
// int gcd(int a,int b);
// int lcm(int a,int b);
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
    
//     printf("%d",lcm(a,b));
//     return 0;
    
// }
// int gcd(int a, int b) { 
//     if (b == 0) 
//         return a; 
//     return gcd(b, a % b); 
// } 
 
// // Function to compute LCM 
// int lcm(int a, int b) { 
//     return (a / gcd(a, b)) * b; 
// }
// #include<stdio.h>
// #include<ctype.h>
// #include <stdio.h>
// #include <ctype.h>

// void countVowelsConsonants(char s[], int v, int c) {
//     v = 0;
//     c = 0;

//     for (int i = 0; s[i] != '\0' && s[i] != '@'; i++) {
//         if (isalpha(s[i])) {
//             char ch = tolower(s[i]);
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//                 v++;
//             else
//                 c++;
//         }
//         printf("%d %d\n", v, c);
//     }
//     int main() { 
//         char email[1000]; 
//         scanf("%s", email); 
//         int vowels, consonants; 
//         countVowelsConsonants(email, &vowels, &consonants); 
//         printf("%d %d\n", vowels, consonants); 
//     return 0; 
// }

// int sumofodds(int a,int b){
//     int sum=0;
//     for(int i=a;i<=b;i++){
//         if(i%2!=0){
//             sum+=i;
//         }
        
//     }
//     return sum;
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("%d",sumofodds(a,b));
//     return 0;
// }
    
// #include<stdio.h>
// int main(){
//     int rollno,sum=0;
//     scanf("%d",&rollno);
//     while(rollno!=0){
//         sum+=rollno%10;
//         rollno/=10;
//     }
//     while(sum>26){
//         int temp=sum;
//         sum=0;
//         while(temp!=0){
//             sum+=temp%10;
//             temp/=10;
//         }
//     }
//     printf("%c\n",'A'+(sum-1));

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n<5||n>20){
//         printf("Invalid input");
//         return 0;
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1||j==1||j==n||i==n){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int countways(int n){
//     if(n==0) return 1;
//     if(n<0) return 0;
//     return countways(n-1)+countways(n-2);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n<=0||n>30){
//         printf("Invalid Input!");
//     }
//     else{
//         printf("%d\n",countways(n));
//     }
//     return 0;
// }