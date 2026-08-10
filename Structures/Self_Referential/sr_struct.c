// Self Referential Structure 
#include <stdio.h>
struct data {
    char a;
    int i;
    struct data *ptr;
};

int main (){
    struct data var1;
    var1.a= 'a';
    var1.i= 60;
    var1.ptr = NULL;

    struct data var2;
    var2.a= 'b';
    var2.i= 6;
    var2.ptr = NULL;

    var1.ptr = &var2;  // var 1 pointer now has address to var 2

    printf("%c %d", var1.ptr->a,var1.ptr->i);  // accessing var 2 contents with var1 pointers 
    return 0;


}