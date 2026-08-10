// String Literal (or String Constants) : A sequence of character (stored in a linear memory arrangement) encolosed withing double brackets

#include <stdio.h>
int main (){
    printf("Hello World\n"); // Valid
    //printf('Hello World')  Invalid

    // Multiline in the code
    printf("Hello"
    "Hyy");

    char *ptr = "Hello World"; //ptr contains the address for the first char of the string literal i.e H
    // *ptr = "M" -> Not allowed   String constants cannot be modified;

    char *name;
    name = "Rounak";
    printf("\n%s\n",name);
    printf("%p",name);

}