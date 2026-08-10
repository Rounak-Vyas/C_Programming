#include <stdio.h>
int main (){  
    // Method 1 : 
    int arr1[5]= {1,2,3,45,6};  // Refer notes 

    // Method 2
    int arr2[]= {3,4,5,6,7,7,8,8,5}; // Will automaatically assign the size 

    // Method 3 : Declare first only if later values are accessed one by one 
    int arr[5];
    for (int i = 0; i<5;i++){    // values filled like a[0]; a[1]; a[2]; a[3];
        scanf("%d",&arr[i]);
    }

}