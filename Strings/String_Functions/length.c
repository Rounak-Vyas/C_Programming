#include <stdio.h>
#include <string.h>
int main (){
    char name[]= "Rounak";
    printf("%d\n",sizeof(name));  // counts the null character 
    printf("%d\n",strlen(name));   // doesn't count the null character

    char name2[10]= "Rounak";
    printf("%d\n",sizeof(name2));  //  counts the size of array 
    printf("%d\n",strlen(name2)); // calculates/counts the length string

 return 0;
    
}