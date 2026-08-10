// Refer handwritten notes for basics of multidimensional arrays and pointers 

#include <stdio.h>
int main(){
    int arr[2][2]= {{1,2},{3,4}};
    int *p;
    for (p=&arr[0][0];p<=&arr[1][1];p++){   // like conventional 1D array , we can't use name of array directly
        printf("%d",*p);
    }
}