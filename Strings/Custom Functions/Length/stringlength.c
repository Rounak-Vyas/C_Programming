#include <stdio.h>

int custom_strlen(const char *str) {
    int count = 0, i =0;   // can use count as a single variable, but separated for better visibility
    while (str[i] != '\0'){
        count++;
        i++; // exclusive of null character
    }
    return count;
}

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printf("%d", custom_strlen(str));
    return 0;
}