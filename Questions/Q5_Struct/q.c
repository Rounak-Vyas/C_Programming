#include <stdio.h>

struct Ournode {
    char x, y, z;
};

int main() {
    struct Ournode p = {'1', '0', 'a'+2};
    struct Ournode *q = &p;
    printf("%c, %c", *((char*)q + 1), *((char*)q + 2));  //  char* -> typecasting pointer q {Earlier it was a pointer pointing to struct ournode data type now it would be a pointer pointing to a char }
    return 0;
}