#include<stdio.h>
#include<string.h>
int main(){
    char str[100]; 
    printf("Enter a String: \n");
    scanf("%s",str);
    gets(str);
    int length=0;
    char vowels,consonants;
    while (str[length]!='0\n')
    {
        length++;
    }
    
    for (int  i = 0; i < length; i++)
    {
        if(str[i]=='a','e','i','o','u','A','E','I','O','U'){
            vowels++;
        }
        else {
            consonants++;
        }
    }
    printf("Number of vowels: %d\n",vowels);
    printf("Number of consonants: %d\n",consonants);
    return 0;
}   
