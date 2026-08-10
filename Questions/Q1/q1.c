// Q1
#include <stdio.h>
int main (){
    char c = 255;
    c= c+10;
    printf("%d",c);
    return 0;
}
// ans -> 9 
// explanation , we are excedding the limit of character data type hence we will solve 265 mod 2^8(i.e 256) => ans 9