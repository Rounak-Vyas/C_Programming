#include <stdio.h>
typedef union {
    int a; 
    char b;
    double c;
}data;

int main (){
    data arr[10];
    arr[0].a = 10; // int   
    arr[1].c = 20; // double 
    arr[2].a = 40; // int 
    arr[3].b = 'A'; // char 

    // mix array 
}
/*
At a time we are accessing only one element of the union, a[0] could either be one of int, char or double 
That is why using union is better. 
Also, it saves memory , union size -> 8(consider double size as 8 )
array size -> 80. 
If we have used struct, struct size -> 4+1+8-> 13(with packing)
arr size -> 13 x 10 -> 130 
*/