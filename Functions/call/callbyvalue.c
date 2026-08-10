/* INFERENCE:
Here the values are not changed cuz as soon the function is completed the variables are destroyed and we are returning nothing
we are passing formal paramters that couldn't change the value of actual parameters*/

#include <stdio.h>
int demo (int, int);

int main (){
    int x,y;
    x = 10;
    y = 20;
    printf("Before calling the function x= %d & y = %d\n", x,y);
    demo(x,y);
    printf("After calling the function x= %d & y = %d\n", x,y); 
}

// Function Definition
int demo (int x, int y){
    x = 20; 
    y= 10;
}
