#include <stdio.h>
int main (){
    enum module {first=1,second,third};
    printf("%d\n",third);
    enum module mymodule = second;
    printf("%d\n",mymodule);
  

    typedef enum {jan=1,feb,march,april,may}Month;
    Month r_birtday= march;
    printf("%d\n",r_birtday);
    
    printf("Size of the enum month is : %zu\n", sizeof(r_birtday));  // size of int
    printf("Size of the enum module is : %zu\n", sizeof(mymodule));
    
    return 0;
}