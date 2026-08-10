#include <stdio.h>
int main (){
    int a= 5;
    int b=6;
    int c = 7;
    int d = 8;

    // &&(and) -> if any one is false , will return false
    int a1 = a<b && b<c && c>d; 
    int a2 = a<b && b<c && c<d;
    printf("%d %d\n", a1,a2);
    
    // ||(or) ->  if any one is true, will return true 
    int o1 = a>b && b>c && c<d; 
    int o2 = a<b && b<c && c<d;
    printf("%d %d\n", o1,o2);

    // !(not)-> reverse the value 
    a1 = !a1;
    a2= !a2;
    printf("%d %d\n", a1,a2);
    
    

}