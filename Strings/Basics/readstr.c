// This program uses scanf and gets function to store a string 

#include <stdio.h>
int main (){
    char a[10];
    printf("Enter a string : \n");
    scanf("%s",a);  // We type hello world 
    // No need to type &a , because we are already passing a array name , which itself points to first char position
    printf("%s",a);  // only hello gets printed -> scanf stops after a blank char (space)

    // gets(a);//  never use gets , it can't limit the number of characters to read hence, may overwrite some other part of memory 
}
