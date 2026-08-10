// A function pointer is a pointer that points to an entire function 

#include <stdio.h>

int add(int a,int b){
    return a+b;
}
int main (){
    int a =10,b=20;
    int (*ptr)(int,int)= add;  // if we put & add
    printf("%d",ptr(10,20));  // put *ptr
    return 0;
}