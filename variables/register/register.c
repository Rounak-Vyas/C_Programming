// we use a register keyword before variable definition to instruct compiler to store that value in the register memory of the system
// this is done when a common variable is used multiple times in a code 
// as accessing any variable from register is very fast 

#include <stdio.h>
int main (){
    register int a = 5;
    printf("The value is now stored in the register of the memory : %d", a);
    return 0;
}