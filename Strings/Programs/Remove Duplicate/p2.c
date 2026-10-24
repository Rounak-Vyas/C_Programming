// A more optimized way


#include <stdio.h>
#include <stdint.h>

void remove_duplicates(char *str) {
    uint8_t hash[256] = {0};  // 1-byte flags per ASCII char  (for 8 bit string, 256 values are possible, initially all are 0)
    uint8_t read = 0, write = 0;

    while (str[read] != '\0') {
        uint8_t ch = (uint8_t)str[read];  // pick the character (ex: 'p')
        if (!hash[ch]) {    // hash[p] = 0 -> if(!0)-> enter the loop 
            hash[ch] = 1;  // make that char hash as one 
            str[write++] = str[read]; // post increment. since it wasn't visited before the str[write] index in overwritten 
        }
        read++; // for scanning next element 
    }
    // Write moves forward only when the character is not visited before 
    // we encounter p again -> hash[p] -> 1 if(!1) -> program never enters the loop , write is still there,but read moves forward for the next element 


    str[write] = '\0';  // Null terminate final string
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

    remove_duplicates(str);
    printf("%s", str);
    return 0;
}