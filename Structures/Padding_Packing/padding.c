// check notes for description
#include <stdio.h>
struct padding
{
    char a;
    int c;
    char b;
    
};


int main(){
    struct padding s;
    printf("Size of char is: %d\n", sizeof(char));
    printf("Size of int is : %d\n", sizeof(int));
    printf("%d",sizeof(s));

    return 0;

}