#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline character
    int length=strlen(str);
    printf("%d",length);
    return 0;
}
