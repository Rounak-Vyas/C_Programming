#include <stdio.h>
int main (){
    int n=5;
    while (n>0){
        if (n==2)  // 1 will never get printed 
            break;
        printf("%d",n);
        n--;
    }

    return 0;
}