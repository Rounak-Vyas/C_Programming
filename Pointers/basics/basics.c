#include <stdio.h>
int main (){
    int x = 4; 
    int *ptr = &x;
    /*  
       OR 
    int *ptr;
    ptr = &x;
    */
    printf("%d\n",*ptr);
    *ptr = 5;
    printf("New value of x using *ptr is = %d", x);
}

/*CAUTION:
1. Never apply indirection operator to unitialized pointer 
    int *ptr;
    printf("%d",*ptr);  -> here pointer is only defined and not initialized, hence we don't know what it is pointing to.

2. Assigning value to an unitialized pointer 
    int *ptr   // only defined
    *ptr = 1;  // its not intialized with any address so it will try to change any location value to 1 

    */