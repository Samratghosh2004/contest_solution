#include <stdio.h>
#include <string.h>

int main() {
    char string[1000];
    int length,i=0;   
    printf("Enter :)");
    scanf("%s", string);
    length = strlen(string);

    while(string[i] != '\0'){
        length ++;
        i++;
    }
    
    printf("Length : %d\n", length);
    
    return 0;
}