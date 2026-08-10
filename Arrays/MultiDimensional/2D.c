// A 2D array could be represented as a m x n matrix 
// For visual representation check hand written notes 
#include <stdio.h>
int main (){
    int arr[2][3]= {{1,2,3},{4,5,6}};
    for (int i=0; i<2;i++){
        for (int j=0; j<3; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}