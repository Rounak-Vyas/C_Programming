#include <stdio.h>
int main (){
    printf("Yooo\n");
    printf ("Hey user enter a number:\t");
    int a;
    scanf("%d",&a);
    printf("The entered value is: %d",a);
    return 0;
}

// Explaination of some basics terms 
// #include-> the #include directive tells the *preprocessor* to copy and paste the entire contents of a specific file into your source code file at that exact location before compilation begins.
// When you write #include <stdio.h> and call printf("Hello World");, a two-step process happens:
// Compilation: The compiler looks inside stdio.h to make sure you spelled printf correctly and passed the right arguments. If it looks good, it generates an object file.

// Linking: The Linker takes your object file, goes into the C Standard Librarynctions, finds the actual compiled code for printf, and glues them together to create your final executable file.
// make a note of which string to use with printf
// d for integer , f for fload , c for char 
// for functions like sizeof we still use %d regardless of which data size we are identifying cuz we are replacing size of function which returns integer value