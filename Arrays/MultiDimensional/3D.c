// Creating and printing a user defined 3D array 

#include <stdio.h>
int main (){
    int num,rows,col;
    printf("\"Enter the dimensions for the matrix to be created\"\n");
    printf("Enter the number of matrix to be created: ");
    scanf("%d",&num);
    printf("Enter the number of rows to be created: ");
    scanf("%d",&rows);
    printf("Enter the number of columns to be created: ");
    scanf("%d",&col);

    // Matrix Creation 
    int arr[num][rows][col];   // VLA (variable length array)-> Don't initialize as {0}
    printf("Enter the data for the matrix:\n");
    for (int i=0; i<num;i++){
        for (int j=0; j<rows;j++){
            for (int k=0; k<col;k++){
                printf("Enter the value for matrix %d row %d col %d: ", i,j,k);
                scanf("%d",&arr[i][j][k]);
            }
        }
    }

    // Printing the matrix
    printf("The values Entered are\n");
    for (int i=0; i<num;i++){
        for (int j=0; j<rows;j++){
            for (int k=0; k<col;k++){
                printf("%d",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


}