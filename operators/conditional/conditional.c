/* Conditional Operator 
Syntax : <condtion> ? <value_if_true>, <value_if_false> 
we can also have expression in place of values i.e if the condition is true or false a further expression/ operation 
could be performed
*/


#include <stdio.h>
int main (){

    int a = 5; 
    int b = (a>10)?10:15;
    printf("%d",b);
    return 0;

}