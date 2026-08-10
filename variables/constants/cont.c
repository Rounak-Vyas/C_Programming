// method 2 : usinf 'const' keyword 

#include <stdio.h>
int main (){
    const int pi = 3.14543; // the variable is defined and set to constant only under this main function 
    printf("The value of const pi is: %d", pi);

   // pi = 3.23; => this line will give error, as const value can't be changed 
    return 0;

}
