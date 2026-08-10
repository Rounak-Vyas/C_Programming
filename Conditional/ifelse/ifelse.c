#include <stdio.h>
int main (){
    int a,b,result;
    a= 5;
    b=6;
    result = a^b;
    if (result>0){
        printf("the result is positive : %d", result);
    }
    else{
        printf("Result is negative");
    }
}

// this is also valid , if you have only one expression under if / else otherwise use {} 
// #include <stdio.h>
// int main (){
//     int a,b,result;
//     a= 5;
//     b=6;
//     result = a^b;
//     if (result>0)
//         printf("The result is positive");
//     else
//         printf("Result is negative");

//     return 0;
// }