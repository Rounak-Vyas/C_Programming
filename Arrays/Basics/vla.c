/*
If asked, int arr[n]; is not static memory. It is a Variable Length Array allocated on the stack with
 automatic storage duration. It is created at runtime and destroyed automatically when the scope ends. 
 Dynamic memory, in the strict sense, refers to heap allocation using malloc, calloc, or realloc.
 */

#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];

}