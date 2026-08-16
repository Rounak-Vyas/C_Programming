#include <stdio.h>
#include <string.h>

void bintodec(char num[32]) {
    int length = strlen(num);
    int value = 0;
    int powerof2 = 1;

    for (int i = length - 1; i >= 0; i--) {
        if (num[i] == '1') {
            value += powerof2;
        }
        powerof2 *= 2;
    }

    printf("%d\n", value);
}

int main() {
    char num[32] = "";
    printf("Enter the binary number: ");

    // Reads up to 31 characters, stopping as soon as a non-0/1 character is reached
    if (scanf("%31[01]", num) == 1) {
        bintodec(num);
    } else {
        printf("Invalid input! Please enter binary digits only (0 and 1).\n");
    }

    return 0;
}