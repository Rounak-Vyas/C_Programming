// float , dounle , long double 

#include <stdio.h>
int main (){
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(double));
    printf("%d\n",sizeof(long double));

    float var = 3.14123456789023;
    double var1 = 3.14123456789023;
    long double var2 = 3.14123456789023;

    printf("%f\n",var);  // by deafult only 6 numbers after decimal 
    printf("%.16f\n",var); // only 7 digits precision , later part approximation 
    printf("%.16lf\n",var1); // 15-16 digits of precision
    printf("%.21Lf\n",var2); // printf throuugh vs code compiler can't read that big value , so it throws garbage value

    return 0;


}