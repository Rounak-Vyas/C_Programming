#include <stdio.h>
#include <string.h>
int main (){
    char firststring[100] = "Rounak";
    char secondstring[100]= " Vyas";
    strcat(firststring,secondstring); // doesn't check the length whether f_string could hold entire data of passed string leading to undefined data 
    printf("%s\n",firststring);

    //strncat  -> appends limited number of char specified by third argument (automatically uses last space of null character)
    char str1[11] = "Rounak";
    char str2[5]= " Vyas";  
    strncat(str1,str2, sizeof(str1)-strlen(str1)-1); // Entire array - Length of stored data - space for null character that must be preserved
    printf("%s",str1); 
}