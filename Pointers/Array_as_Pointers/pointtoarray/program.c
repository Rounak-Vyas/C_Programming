// This code demonstrstes how a pointer is pointer to an array 
// Taking example of 1d Array
// Refer handwritten notes for actual visualization


#include <stdio.h>
int main (){
    int arr []= {1,2,3,4,5};
    int *ptr = arr; // this will point to only the first element address of the array 
    printf("The address stored in the ptr is: %p\n", ptr);
    printf("It could be checked via : \n");
    printf("\t1.Despecifier operator * , *ptr = %d\n", *ptr);
    printf("\t2.Printing the address of first element of array that is: %p\n", &arr[0]);

    // Pointing to an entire array
    printf("To point to an entire array: \n");
    int (*p)[5]= &arr; //  this is a pointer which points to an entire array consisting five elements 
    printf("%p\n",p);
   // printf("%d\n",*p);   will give garbage value , because %d expects int value and *p is a pointer to 5 integers 
   // pointing to entire array is useful in multidimensional arrays 
}

