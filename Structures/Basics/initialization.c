#include <stdio.h>
struct abc {
    int x;
    int y;
    int z;
};

int main (){
    struct abc a = {10,20,30};
    printf("%d",a.x);


    // Designated intialization
    struct abc b = {.y=20,.x=10,.z=30};
    printf("%d %d %d", a.x,a.y,a.z);

}