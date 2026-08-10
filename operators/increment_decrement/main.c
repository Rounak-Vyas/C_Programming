#include <stdio.h>
int main (){
    int a,b;
    a = 5;
    b=6;
    printf("The original values of the variable are a = %d and b= %d\n",a,b);
    printf("Post increment operator, first use then modify the value\n");
    printf("before value : %d\n", a++);
    printf("after value : %d\n", a);
    printf("Pre increment operator, first modify then use the value\n");
    printf("before value : %d\n", --b);
    printf("after value : %d\n", b);

    // combined values, use of lexical analysis and token generation

    printf("%d\n", a+++b);
    printf("%d\n", a + ++b);
    printf("%d\n", a++ + ++b);


}