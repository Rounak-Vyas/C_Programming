#include <stdio.h>
int *findMid(int a[], int len);
int main (){
    int a[]= {1,2,3,4,5};
    int len = sizeof(a)/sizeof(a[0]);
    int *mid = findMid(a,len);  // we just type a , cuz it refers to the base address of the array[0]
    printf("%d", *mid);
    return 0;
}

int *findMid(int a[],int len){   // or write int *findMid(int *a, int len)
    return &a[len/2];   

}

/*When you pass an array to a function, the array itself is not passed. Only the address of its first element is passed. 
That's why int a[] in a function parameter is effectively the same as int *a, and why the function is still working with 
the original array created in main().

The biggest concept to remember
This line:
int a[]

inside a function does not mean an array is being copied into the function.

In function parameters, int a[] is automatically treated as:
int *a

So the function receives only the address of the first element, and both main() and findMid() are working with the same 
array. That's why returning &a[n/2] is safe here: you're returning the address of an element in main()'s array, not the
 address of a local array created inside the function.*/
