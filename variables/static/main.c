#include <stdio.h>
int main (){
    int a;
    a = increment();
    a = increment();
    a = increment();
    printf("%d",a);
    return 0; 

}
// the use of static in increment file 
/* in the second code, when we will not use the static keyword, and the output we will get is 1 because everytime
 the function is called and completed, the variable would be destroyed
 However in case of static, the value of the variable would be saved even after function is called.  */

 // if we use static in a local variable/ local scope , the by defualt value would be zero , unlike conventional where it 
 //stores garbage value