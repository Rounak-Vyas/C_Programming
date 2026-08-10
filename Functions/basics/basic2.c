#include <stdio.h>

int square(int); // this is only function declaration. defining var name / parameter name is not mandatory here
int main (){
    printf("Calculate the square of any number:\n");
    int num, result;
    scanf("%d",&num);
    result = square(num);  // the compiler jumps to the function defintition from here , and then comes back with the..
    printf("The result is: %d", result); // .. return value & executes further, same goes the way it points out error in the code 
    return 0;
}

// Function Definition 
int square(int num) // it should exactly match function declaration line, & naming the input var/parameter is mandatory here
{
    int result;
    result = num*num;
    return result;
}

