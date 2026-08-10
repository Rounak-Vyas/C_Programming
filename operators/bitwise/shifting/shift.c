/* Bitwise shift operator 
num << value left shift : 0010 -> 010_ -> blank space would be filled by 0 so final output => 0101
num >> value right shift : 0010 -> _001 -> .... => 0001 
num = the number in the code, defined by user or given 
value = by what value you want to shift the bits <<1 ; means shift bits by one
don't blindly jump, shift place value by place value and the final output would be values in the original placeholders */

#include <stdio.h>
int main (){
    char a = 2, b= 2;
    a = a<<1;   // a = 0000 0010 => 0000 0100
    printf("after left shift: %d\n", a);
 
    b= b>>1;  //b = 0000 0010 => 0000 0001
    printf("after right shift: %d", b);

    return 0; 

}