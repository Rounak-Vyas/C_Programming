#include <stdio.h>
#pragma pack(1)
struct shop {   // total size -> 16 bytes ; See How :
    int cost;  // 4 bytes

    union {   // accomodate size of bigger member i.e -> books = 12 bytes
        struct {                  // size -> 12 bytes-> (each pointer 4 bytes)
            char *name;      
            char *author;  
            char *coauthor;   
        } books;  // write variables name here (which actually creates a variable type struct , if we type
                     // name above it would only be struct with tag not variable name )

        struct {     // size = 8 bytes
            char *color; 
            int size;
        } shirts;
    } items;
};                     // a single struct for both books and shirts would have consumed more memory 
// useful because at a time we will either store parameters of a book or a t shirt (An item could be a book or a shirt)

int main() {
    struct shop s;

    s.items.books.author = "pp";

    printf("Author: %s\n", s.items.books.author);
    printf("Size of Struct: %zu", sizeof(s));  
    return 0;
}