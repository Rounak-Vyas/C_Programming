// We return a pointer to a structure
// Better strategy , use type def to avoid typing struct point in many places 
#include <stdio.h>
#include <stdlib.h>

struct point {
    int x; int y;
};

struct point *fun(int a , int b){  // will return a pointer of time struct point 
    struct point *ptr = (struct point*)malloc(sizeof(struct point));
    if(ptr==NULL)
        exit(1);
    ptr->x = a+2;
    ptr->y = b+5;
    return ptr;
} 

void print(struct point *ptr){
    printf("x is :%d\n", ptr->x);
    printf("y is: %d\n",ptr->y);
}

int main (){
    struct point *ptr1, *ptr2;
    ptr1 = fun(2,3);
    ptr2 = fun(4,5);
    print(ptr1);
    print(ptr2);
    free(ptr1);
    free(ptr2);

    return 0;
}