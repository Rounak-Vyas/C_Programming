#include <stdio.h>
#include <stdint.h>

void classify_chars(const char *str, uint8_t *alpha, uint8_t *digit, uint8_t *symbol) { 
    if (str[0] == '\0') return;
        for (int i=0; str[i] != '\0'; i++){
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) {
            *alpha = *alpha +1;
        }
        else if(str[i] >= 48 && str[i] <= 57){
            *digit+=1;
        } 
        else if (str[i] != ' '){
            *symbol+=1;
        }
    }
}

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);

    // Remove newline
    uint8_t i = 0;
    while (str[i]) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    uint8_t alpha = 0, digit = 0, symbol = 0;
    classify_chars(str, &alpha, &digit, &symbol);
    printf("Alphabets = %u\nDigits = %u\nSymbols = %u", alpha, digit, symbol);
    return 0;
}