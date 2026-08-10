// Free-> Releases the memory after use

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int *input(){ // the function will return an address which would be eventually pointing to an integer
    int i=0;
    int*ptr= (int*)malloc(SIZE*sizeof(int));
    for (i=0;i<SIZE;i++){
        printf("Enter the element: ");
        scanf("%d",ptr+i);
    }
    return ptr;
} 
int main (){
    int sum=0,i;
    int*ptr = input();
    for (i=0;i<SIZE;i++){
        printf("Number %d: %d\n", i+1, *(ptr+i));
    }
    // After the fun input is executed, the local variables are destroyes BUT , the malloc memory is retain
    // Hence we need to manually free the memory after the work is done 
    free(ptr);

    // after memory is free, assign the pointer as NULL, or else it will become a dangling pointer.
    ptr=NULL;
    return 0;
}

