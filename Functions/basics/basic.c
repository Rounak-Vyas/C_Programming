#include <stdio.h>

int rectarea(int length,int breadth){
    int area = length*breadth;
    return area;

}

int main (){
    printf("This program would be used to calculate area of any rectangle given length and breadth dimension..\n");
    printf("Enter the dimensions of the rectangle\n");
    int length,breadth;
    printf("Length: ");
    scanf("%d",&length);
    //printf("\n");  not required as after scanf it will automatically shift to next line 
    printf("Breadth: ");
    scanf("%d",&breadth);
    int area = rectarea(length,breadth);
    printf("The area is: %d", area);

    return 0;

}

