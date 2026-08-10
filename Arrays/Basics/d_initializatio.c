// Designated Initialization of the arrays 

// Normal way : int arr[5]= {1,2,4,5,6};

// Designated way :
#include <stdio.h>
int main (){
    int arr1[5]= {[0]=1,[3]=2}; // rest  spaces filled by zero 
    for (int i = 0; i <5; i++)
        printf("%d\t",arr1[i]);

    printf("\n");
    // Mix way
    int arr2[5] = {1,2,[3]=4}; // in case of a conflict {1,3, [1]= 4}=> designated value would be priritzed, ie at index_2 4 would be assigned
    for (int i = 0; i <5; i++)
        printf("%d\t",arr2[i]);
}