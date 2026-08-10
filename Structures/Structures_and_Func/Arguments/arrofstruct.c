#include <stdio.h>
typedef struct abc {
    int x; 
    int y;
}num;

void print(num arr[]) {// receive an array of type num
    int i=0;
    for (i=0;i<2;i++){
        printf("%d\n",arr[i].x);
        printf("%d\n",arr[i].y);
    }

}

int main (){
    num arr[2] = {{1,2},{3,4}};
    print(arr);
    return 0;
}