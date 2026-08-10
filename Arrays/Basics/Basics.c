/* Standand way to initialize the size of array {if to be used multiple times in the code} -> Use a macro */

#include <stdio.h>
#define AL 10 // AL = Array length 
int main (){
    int arr[AL];
    for (int i = 0; i<AL;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<AL;i++){
        printf("%d\n",arr[i]);
    }
}