// This code demonstates use of string copy functions 

#include <stdio.h>
#include <string.h>
int main (){
    char source[10] = "Hello";
    char destination[6];
    // strcpy
    strcpy(destination,source);
    printf("%s\n",destination);

    // strcpy doesn't check the length of the destination i.e if the length of data of source is greater 
    //than the size of destination , than it may cuz undefined behaviour

    // strncpy
    strncpy(destination,source,sizeof(destination)); //n-> number of characters to be copied
    destination[(sizeof(destination))-1]= '\0'; // to be used only if size of source >= destination
    printf("%s",destination);

    // assign value to string 
    char str[10];
    strcpy(str,"Hello");
    printf("\n%s",str);

}