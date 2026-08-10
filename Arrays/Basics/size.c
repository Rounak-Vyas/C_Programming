// Definig size more than number of values 
#include <stdio.h>
int main (){
    int arr[10]={1,2,3,4,5};
    printf(" At index 4 = %d\n", arr[4]);
    printf("At the index 5 = %d\n", arr[5] );
    printf("The size of the array is : %d\n",sizeof(arr));

// Array Defining with Annonymous range (Upto the user)
    int arr2[]={0};
    printf("Enter the size of array : ");
    int arr2size;
    scanf("%d",&arr2size);
    for (int i=0; i<arr2size; i++){
        printf("Enter the number at %d index: ", i);
        scanf("%d", &arr2[i]);
    }

// size calculation 
    int arr3[]= {1,2,3,4,5,6,6,4,4,3,2,2,2,24,4,3,34,4,3,4,4,5,3,2,5,7,8,76,64,4,3,2};
    int arr3size = sizeof(arr3)/sizeof(arr3[0]);
    printf("Size of the 3rd array is : %d\n",arr3size);





}