#include <stdio.h>
int main (){
    int arr [][3]= {1,2,3,4,5,6};  // this signifies it has 2 rows and 3 columns {{1,2,3},{4,5,6}}
    int (*ptr)[3]= arr;  // a pointer which is pointing to 1st 1D array or 1st row, using just *ptr would be wrong as it
                        //  is pointing to entire row so correct data type must be quivalent to size of that row. 
    printf ("%d %d\n", (*ptr)[1], (*ptr)[2]); // (*ptr)[1] = *((*ptr)+1) -> *ptr will point to first element of 1st 1D array & +1 will shift it to next element
    ++ptr; // shifting the pointer to the 2nd row of 2D array
    printf ("%d %d", (*ptr)[1], (*ptr)[2]);
    return 0;

}
