#include <stdio.h>
int main (){
    int i = 3;
    while (i>0){
        printf("%d",i);
        i--;

    }
    printf("\n");
    int j = 3;
    while (j>0){
        printf("%d",j);  // same output 
        --j;

    }
    return 0;
}