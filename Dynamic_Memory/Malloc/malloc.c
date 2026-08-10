// Assigns a contiguous block of memory from the heap 
// ** Include stdlib to use DMA functions 

#include <stdio.h>
#include <stdlib.h>
int main (){
    int n;
    printf("Enter the number of integers to be stored: ");
    scanf("%d",&n);

    // Malloc function 
    int *ptr= (int*)malloc(n*sizeof(int));
    // malloc directly takes input as *number of bytes*; hence number of int mul by size of int;
    // it has size_t definition -> means an unsigned int type 
    // after assigning the space(number of bytes) from heap ; malloc -> function returns a void pointer pointing to first byte address
    // (int*)-> type casting void pointer -> int 
    

    // Conditional check 
    if (ptr==NULL){
        printf("Memory couldn't be allocated :(");
        exit(1);
    }
// Because of a contiguous block of memory we depicting the behaviour of an array 
    for (int i=0; i<n; i++ ){
        printf("Enter the number: ");
        scanf("%d", ptr+i);  // i=0 so first location , +1 means next byte address
    }
    for (int i=0; i<n;i++){
        printf("%d ",*(ptr+i));
    }

    return 0;
}