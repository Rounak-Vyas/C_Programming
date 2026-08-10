#include <stdio.h>
int main (){
    int arr[]= {1,2,3,4,5,6};
    int *ptr;
    ptr = &arr[0]; // the array will now contain address of index 0 
    printf("The current value is : %d\n", *ptr);
    ptr = ptr+3; // will now point to 3rd index of the array
    printf("Value after ptr+3 becomes: %d", *ptr);

}

// same for subtraction 
// if two pointers are pointer two different indexs of the array , subtraction will lead to difference in index ie number of indexes between them 