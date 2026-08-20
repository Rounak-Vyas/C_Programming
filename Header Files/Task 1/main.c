#include <stdio.h>
#include "MathUtility.h"

int main (){
    printf("Enter the numbers:\n");
    int a,b;
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);

    int result_add = add(a,b);
    printf("Addition result is: %d\n",result_add);
    int result_sub = subtract(a,b);
    printf("Subtraction result is: %d\n", result_sub);
    int result_mul = multiply(a,b);
    printf("Multiplication result is: %d", result_mul);
    return 0;

}