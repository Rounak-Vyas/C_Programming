#include <stdio.h>
int main (){
    int x=10;
    int *p = &x;
    printf("*p will give %d\n", *p);
    printf("but *&x will aalso give %d", *&x);
    return 0;
}
