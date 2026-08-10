#include <stdio.h>
int main (){

    // 1. Comma Operator as a Separator 
    int a = 3, b=5, c=6;   // Equivalent to int a=3; int b=5; int c=6;
    printf("%d %d %d\n", a,b,c);


    // 2. Comma operator as a Operator 
    int d = (6,7,8); // parantheses is evaluates first, then because of comma inside, rightmost value is returned 
    printf("%d\n", d);
    // Output => 8
    /*  Comma operator returns the rightmost operand in the expression and it simply 
        evaluates the rest of the operands and finally reject them.
        It Evaluates and then reject */
    int var = (printf("Hello\n"), 5);
    printf("%d\n",var);


    // 3. Comma Operator has least precedence among all 
    // Example 1 
    int f; 
    f = 3,4,8; // assignment having more precedence then comma; evaluated as => (f=3),4,8; {nothing happens of 4 & 8}
    printf("%d\n",f);

    // Example 2 
    int g = 3,4,8; // Evaluated as int g= 3; int 4; int 8 (Last two are invalid variable names)
    printf("%d",g);
    /*ERROR :  Comma operator acts like a separator within function calls and definitions,variable & enum declarations.
    */

}
