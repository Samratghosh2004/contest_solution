#include <stdio.h>
#include <string.h>

int main() {
    char x[100], y[100];
    int i, j, length =0;
    scanf("%s", x);   
    length = strlen(x);
    j = length-1;
    
    for (i = 0; i < length; i++) {
        y[i] = x[j];
        j--;
    }
    
    //y[length] = ; 
    printf("Answer: %s\n", y);
    
    return 0;
}
