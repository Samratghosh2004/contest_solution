#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, x, vowel = 0, consonant = 0;
    scanf("%s", str);
    
    for (x = 0; str[x] != '\0'; x++);  
    
    for (i = 0; i < x; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
            vowel++;
        else 
            consonant++;
        
    }
    
    printf("vowels: %d\n", vowel);
    printf("consonants: %d\n", consonant);
    
    return 0;
}