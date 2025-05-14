#include<stdio.h>
#include<string.h>

// int main() {
//     char str[100];
    
//     printf("Enter a String: \n");
//     scanf("%99s", str); // Limit input to avoid buffer overflow
//     getchar(); // Consume the leftover newline character
    
//     int length = 0;
//     int vowels = 0, consonants = 0; // Initialize counters
    
//     while (str[length] != '\0') {
//         length++;
//     }
    
//     for (int i = 0; i < length; i++) {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
//             str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
//             vowels++;
//         } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
//             consonants++;
//         }
//     }
    
//     printf("Number of vowels: %d\n", vowels);
//     printf("Number of consonants: %d\n", consonants);
    
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    printf("Enter the string:\n");
    scanf("%s",str);
    getchar();
    int freq[256]={0};
    for(int i=0;str[i]!='\0';i++){
        freq[(int)str[i]]++;
        
    }
    for (int i = 0; i < 256; i++) {
    if (freq[i] > 0) {
        printf("%c: %d\n", i, freq[i]);
    }
}

}