// this code creates an array of function pointers (pointers pointing to different functions) and demonstrate a calculator application

#include <stdio.h>
#define OPS 4

float sum(float a, float b){return (a+b);}
float sub(float a, float b){return (a-b);}
float mul(float a, float b){return (a*b);}
float div(float a, float b){return (a/b);}

int main (){
    float (*ptr[OPS])(float,float) = {sum,sub,mul,div}; // -> ptr array banao -> ptr array ka pointer 
    float a,b;
    int choice;
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter your choice: 0 for sum, 1 for sub, 2 for mult, 3 for div:\n");
    scanf("%d",&choice);
    printf("%f",ptr[choice](a,b));
    return 0;

}