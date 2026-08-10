/* 
Syntax:  for (initialization; condition; increment/decrement){
              statements
         }
*/


#include <stdio.h>
int main (){
    int i;
    for (i=7;i>0;i--){
        printf("%d",i);

    }
    printf("\n");
    int j;
    for (j=7;j>0;--j){
        printf("%d",j);
    }
    return 0;
}
