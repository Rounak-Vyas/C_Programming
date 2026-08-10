#include <stdio.h>
int main (){
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;  // this by deafult points to the first element address of the array
    // point to whole array -> int *[length of array] ptr = &arr
    printf("%d\n", *ptr++);
    printf("Post increment: %d",*ptr);
}

// INVALID STATEMENT
// printf("%d\n", arr++);  -> arr = arr+1 assigning new value to a {but by default its always address of first element}