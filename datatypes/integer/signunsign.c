// singed integer : it also covers negative value ,so the range becomes half 
// if an x datatype can store upto 8 , it will store as -4 to +4 
// whereas the unsigned only stores positive type hence it will go from 0 to 8 

#include <stdio.h>
#include <limits.h>

int main (){
    printf("Size of int data type is : %d\n",sizeof(int));
    int var1= INT_MIN;
    int var2 = INT_MAX;
    printf("the limits are %d to %d\n",var1,var2);
    printf("Size of unsigned int data type is also %u\n",sizeof(unsigned int));  // %u is used for printing unsigned value
    unsigned int var3 = UINT_MAX;
    printf("but the limits are 0 to %u\n",var3);

    printf("---\n");
    printf("Size of short int data type is :%d\n",sizeof(short int));
    short int var4 = SHRT_MIN;
    short int var5 = SHRT_MAX;
    printf("the limits are %d to %d\n",var4,var5);
    printf("Size of unsinged shor int is also %u\n",sizeof(unsigned short int));
    short unsigned int var6 = USHRT_MAX;
    printf("and the limits are 0 to %u\n",var6);



    printf("---\n");
    printf("Size of long long int data type is %d\n",sizeof(long long int));
    long long int var7 = LLONG_MIN;
    long long int var8 = LLONG_MAX;
    printf("the limits are %lld to %lld\n",var7,var8);  //the use of %lld , normal %d can print upto only 32 bits but this..
    printf("The size of unsigned long long int is also %u\n",sizeof(unsigned long long int)); //.. is 64 bits long data type
    unsigned long long var9= ULLONG_MAX; 
    printf("but the limits are 0 to %llu",var9);


}