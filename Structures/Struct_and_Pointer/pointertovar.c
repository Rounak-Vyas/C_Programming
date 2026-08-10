// accessing the structures variables using pointer 

#include <stdio.h>
struct abc {
    int x;
    int y;
};

int main (){
    struct abc a = {1,2};
    struct abc *ptr = &a; //-> a ptr which points to a data type of struct abc 

    printf ("%d %d", ptr->x, ptr->y);  // {ptr->x means (*ptr).x}

    return 0;

}