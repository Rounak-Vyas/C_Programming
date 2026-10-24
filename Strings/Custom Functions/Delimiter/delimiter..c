#include <stdio.h>
#include <stdint.h>

void split_string(const char *str, char delimiter, char tokens[10][20], uint8_t *count) {
    uint8_t i=0, j=0, k=0;
    for (i=0; str[i]!='\0';i++){
        if(str[i] == delimiter){
            tokens[j][k] = '\0';   // after the char array has finished it needs a null terminator 
            *count+=1;
            j++; k=0;
        }
        else{
            tokens[j][k]=str[i];
            k++;
        }
    }
    // for the last element 
    *count+=1;
    tokens[j][k] = '\0';
}

int main() {
    char str[101];
    char delimiter;
    fgets(str, sizeof(str), stdin);
    scanf(" %c", &delimiter);

    // Remove newline
    uint8_t i = 0;
    while (str[i]) {
        if (str[i] == '\n') { str[i] = '\0'; break; }
        i++;
    }

    char tokens[10][20];
    uint8_t count = 0;

    split_string(str, delimiter, tokens, &count);

    for (uint8_t i = 0; i < count; i++) {
        printf("%s\n", tokens[i]);
    }

    return 0;
}