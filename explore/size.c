#include <stdio.h>
int main (){
    int num = 10;
    int *ptr = &num;
    printf("Size of the pointer is: %zu",sizeof(ptr));
    return 0;
}