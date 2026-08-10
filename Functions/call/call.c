#include <stdio.h>

static int swap (static int, static int);

int main (){
    int x,y;
    x= 10;
    y= 20;
    x,y= swap(x,y);  // error 1 | evaluated as -> (x), (y= swap(x,y))  -> hence y get assigned as 10
    printf("%d %d", x,y);

}

static int swap (static int a , static int b){
    a = 20;
    b= 10;
    return a,b;  // error 2  | returns only last value -> 10 , 
}
