/*operational_bitwise operators => &(and), |(or), ^(xor)
the following are binary operators and perform operations between two operands*/

#include <stdio.h>
int main (){
    char a = 2;
    char b = 3;   // you can also use int data type 

    char r1  = a&b;   // a = 0000 0010  , b= 0000 0011 -> & performs bitwise AND operation between the numbers
    printf("%d\n",r1); // defined as char , but since we need the numeric output; we use %d , because we want printf function to interpret result as numeric integer not char/ascii character. 
//The variable type (char) does not force printf() to print a character.

    char r2  = a|b;   // a = 0000 0010  , b= 0000 0011 -> | performs bitwise OR operation between the numbers
    printf("%d\n",r2);

    char r3  = a^b;   // a = 0000 0010  , b= 0000 0011 -> ^ performs bitwise XOR operation between the numbers
    printf("%d\n",r3);  

    return 0;


}