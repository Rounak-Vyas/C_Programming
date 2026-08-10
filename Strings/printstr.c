// this code demonstrates the printing of strings using printf and puts function 

#include <stdio.h>
int main(){
    char *ptr = "Hello World";
    printf("%s\n",ptr);
    printf("%.5s\n", ptr); // Prints only first 5 character of the entire string
    printf("%6.5s\n",ptr); // creates a space of 6 and fills first 5 char from rhs; 6= field of length 
    printf("%6.s\n",ptr); // Blank output . creates space but nothing to fill 

    puts(ptr); // only type pointer name , no other symbols require , it also prints new line char automatically
    puts(ptr);
}