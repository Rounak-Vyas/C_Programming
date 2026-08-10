// Method 1 : Use #define keyword 
// syntax: #define name_of_constant constant_value

#include <stdio.h>
#define Pivalue 3.145632  // here the term used to address pivalue is "macro"
 
int main (){
    printf("The value of the constant Pi is: %f",Pivalue);
    return 0;
}

// Using it as a function 

// #include <stdio.h>
// #define add(x,y) x+y
// int main () {
//     printf("The sum of 2 values is: %d", add(2,3));
//     return 0; 

// }