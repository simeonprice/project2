#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rotationCipher(char* text, int key);

int main(void) {
    // RANDOM RULES FOR CODE
    int key;
    char text[101];
    
    printf("Enter the text you want encrypted: ");
    fgets(text, sizeof(text), stdin);
    printf("Enter your rotation key: ");
    scanf("%d", &key);
    printf("The encrypted text is: ");
    rotationCipher(text, key);
    return 0;
    
    
}

void rotationCipher(char* text, int key) {
    
    int index = 0;
    int cipherValue;
    char cipher;
    
    while (text[index] != "\0" && strlen(text) - 1 > index) {
        
        cipherValue = (((int)text[index] - 65 + key) % 26 + 65);
        cipher = (char)(cipherValue);
        
        printf("%c", cipher);
        index++;
    }
    printf("\n");
    
}