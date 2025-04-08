#include <stdio.h>
#include <string.h>
// void main(){
//     char name[20];
//     printf("Enter your name: ");
//     scanf("%s", name);
//     printf("Hello %s\n", name);
// }

//     int count = 0;
//     int i;
//     char str[20];
//     char ch;
//     printf("Enter a string: ");
//     scanf("%s", str);
//     printf("Enter the character to count:\n");
//     scanf(" %c", &ch);
//     for(i=0;str[i]!='\0';i++){
//         if(str[i] == ch){
//             count++;
//         }
//     }
//     printf("The character %c appears %d times in the string %s\n", ch, count, str);
// }
// int main(){
//     char s='a';
//     char v='z';
//     char t='z'-'y';
//     printf("%d\n", t);
//     printf("%d\n", s);
//     printf("%d\n", v);
//     printf("%d\n", s-v);
//     printf("%d\n", v-s);
//     printf("%d\n", s-t);
//     printf("%d\n", s-1);
//     printf("%d\n", s-2);
//     return 0;
// }
// int main (){
//     char s[]="Hello";
//     printf("%lu\n", strlen(s));
    
//     char src[]="Hello World";
//     char dest[20];  
//     strcpy(dest, src);
//     printf("%s\n", dest);

//     char src1[]="Hello World Welcome";
//     char dest1[20];
//     strncpy(dest1, src1, 5);
//     dest1[5]='\0';
//     printf("%s\n", dest);
//      char s1[]="Hello";
//     char s2[]="Chitkara Universirty";
//     strcat(s1, s2);
//     printf("%s\n", s1);
//     char str1[]="Mangoes";
//     char str2[]="Mango";
//     int res = strcmp(str1, str2);
//     if(res==0){
//         printf("The strings are equal\n");
//     }
//     else if(res>0){
//         printf("The first string is greater than the second string\n");
//     }
//     else{
//         printf("The first string is less than the second string\n");
//     }   
//     return 0;
// // }
// int main(){
//     char s1[]="Hello";
//     char s2[]="Beautiful world of C";
//     printf("The length of the string s1 is %lu\n", strlen(s1));
//     printf("The length of the string s2 is %lu\n", strlen(s2));
//     printf("%d",strlen(s2+8));
//     return 0;
// }
// input strings using gets() and puts()
// void main(){
//     char name[20];
//     printf("Enter your name: ");
//     gets(name);
//     printf("Hello ");
//     puts(name);
// }
// various ways of storing string variables 
// exmaples 
// char str1[6]="hello"
// char str2[]="hello"
// char *str3="hello"
// char str4[6]={'h','e','l','l','o','\0'}
//note each variable is considered a constant in that the space it is connected to cannot be changes i.e str1= str2 is not allowded
// the above exmple is only  valid when we are using pointers 
// we can change the parts of a string 
// char str1[6]="hello";
// char str1[0]='y'
//  str 1 is now yello
// string input 
// char name[];
// scanf("%s", name);
// counting the number of charactes in a string 
// int main (){
//     char str[20];
//     int i, count=0;
//     printf("Enter a string: ");
//     scanf("%s", str);
//     for(i=0; str[i]!='\0'; i++){
//         count++;
//     }
//     printf("The length of the string is %d\n", count);
//     return 0;
// }
