// We will pass the address of the structure instead of entire structure or its individual members 
// members of x is accessed by -> 
// used when size of struct is large 

#include <stdio.h>
struct numbers{
    int x;
    int y;
};

void print (struct numbers *ptr){
    printf("Value of x is: %d\n", ptr->x);
    printf("Value of y is: %d\n",ptr->y );
}
int main (){
    struct numbers s1 = {23,33};
    struct numbers s2 = {12,34};
    print(&s1);
    print(&s2);
    return 0;

}