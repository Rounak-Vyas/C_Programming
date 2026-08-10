/*The standard library function strtok (string tokenizer) from <string.h> is designed specifically to split 
strings by delimiters (like spaces):*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);

    // strtok replaces delimiters (' ') with '\0' and returns each token
    char *token = strtok(s, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " "); // Get next word
    }

    free(s);
    return 0;
}