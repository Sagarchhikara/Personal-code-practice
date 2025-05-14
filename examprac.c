#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int len = 0;
    printf("Enter a sting:\n");
    scanf("%s",str);
    while (str[len]!=0)
    {
        /* code */
        len++;
    }
    for(int i=0; i<len; i++){
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;


    }
    printf("Reversed string is %s",str);
    return 0;
}   
