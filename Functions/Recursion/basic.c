/* Recursion means when a function is called by itself 
In the condition the concept of stack is used , to resolve how control is transferred and how the values are returned to the 
calling function*/

#include <stdio.h>

// Function definition
int fun (int n){
    if (n==1)
        return 1;
    else 
        return 1 + fun(n-1);
}
int main (){
    int n=3;
    printf("%d",fun(n));

    return 0;
}
// refer hand notes to understand the flow 