// #include <stdio.h>
// int main (){
//     for (int i =0; i<20; i++){
//         if (i%2==0)
//             continue;
//         printf("%d\n",i);
//     }

//     return 0;
// }


// similar code as of break

#include <stdio.h>
int main (){
    for (int i =5; i>0; i--){
        if (i==2)        // 1 will get printed in continue but not in break, 
            continue;    // break terminates the entire loop, while continue just skips the current iteration
        printf("%d",i);

    }
    return 0;
}