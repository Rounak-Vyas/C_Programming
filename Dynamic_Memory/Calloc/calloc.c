// Calloc -> Clear Allocation -> Takes input as number of blocks x size of each block 

#include <stdio.h>
#include <stdlib.h>
int main (){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    // Malloc function
    int *ptr = (int*)calloc(n,sizeof(int));
    // n-> number of blocks 
    // size of each block 
    // so equivalent malloc is malloc(n*sizeof(int)); -> a total contiguous space of 40 bytes 10*4
    // calloc-> give 10 blocks of memory , each block 4 bytes long-> total 40 bytes 


    // conditional check
    if(ptr==NULL)
        exit(1);

    for (int i=0; i<n; i++){
        *(ptr+i)= i+1;
    }
    for (int i=0; i<n;i++){
        printf("%d ", *(ptr+i));
    }

    return 0;
}