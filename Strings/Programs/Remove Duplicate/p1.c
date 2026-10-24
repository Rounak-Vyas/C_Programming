// A hardcore way, check for each character , copy in a new string and then move the entire string to original string 


#include <stdio.h>
#include <stdint.h>


int stringlength(char *string_ptr) {
    int count = 0;
    while (string_ptr[count] != '\0') {
        count++;
    }
    return count;
}

void remove_duplicates(char *str) {
    char temp[256]; // Temporary buffer for modified string
    int write_idx = 0;
    int len = stringlength(str);

    for (int i = 0; i < len; i++) {
        char current_char = str[i];
        int already_exists = 0;

        // Check if current_char is already in temp
        for (int j = 0; j < write_idx; j++) {
            if (temp[j] == current_char) {
                already_exists = 1;
                break;
            }
        }

        // If not found in temp, append it
        if (!already_exists) {
            temp[write_idx] = current_char;
            write_idx++;
        }
    }

    // Null-terminate the temporary string
    temp[write_idx] = '\0';

    // Copy modified string back to original string
    for (int i = 0; i <= write_idx; i++) {
        str[i] = temp[i];
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

    remove_duplicates(str);
    printf("%s", str);
    return 0;
}