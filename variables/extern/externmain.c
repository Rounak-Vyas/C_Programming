// declare : name it 
// define : assign location in the memort 
// initialize : assign a value to the variable with that memory address
// extern only declare not define 
// auto declare and define 

// #include <stdio.h>
// extern int a; // this 'extern' only declares a variable, and not defines it 
// int main (){
//     printf("%d",a);
//     return 0;
    
// }

// to run the file , compile both of them together 
// gcc main.c other.c -o main, and the linker will link the file , don't compile individually

// Value a in the same code 
#include <stdio.h>
int a = 10;
int main (){
    extern int a;
    printf("The value is defined out of main function , but because of extern keyword, the linker will go outside of function; first same file, then another %d",a);
 return 0;
}
