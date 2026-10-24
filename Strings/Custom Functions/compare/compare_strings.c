#include <stdio.h>

int custom_strcmp(const char *a, const char *b) {
    int i = 0;
    while(a[i] != '\0' || b[i] != '\0'){
        if(a[i] != b[i])
            return (a[i]-b[i]);
        i++;
    }
    return 0;
}

int main() {
    char a[101], b[101];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    // Remove newline
    int i = 0;
    while (a[i]) {
        if (a[i] == '\n') { a[i] = '\0'; break; }
        i++;
    }
    i = 0;
    while (b[i]) {
        if (b[i] == '\n') { b[i] = '\0'; break; }
        i++;
    }

    printf("%d", custom_strcmp(a, b));
    return 0;
}