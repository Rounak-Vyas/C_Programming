/*INFERENCE:
Understanding the data types 
&-> address of | &x-> passes the address of variable x to the function call
* -> pointers | these are the datatypes used to store addresses of variables
*x -> points to the value at the address of var x 

Here instead of passing the arguments(& their values) we are passing their address, and the function is changing the values
at those addresses
*/

#include <stdio.h>
int swap (int*, int*);

int main (){
    int x,y;
    x = 10;
    y = 20;
    printf("Before calling the function x = %d & y = %d\n", x,y);
    swap(&x,&y);
    printf("After calling the function x = %d & y = %d\n", x,y); 
}

// Function Definition
int swap (int *x, int *y){
    *x = 20; 
    *y= 10;
}
