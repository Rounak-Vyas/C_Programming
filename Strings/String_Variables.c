/* A string variable is different from a string constant.
a string variable is defined as an array, and thus all the propertied of an array could be implemented in it 
"Hello" -> String Constant 
char s[6]= "Hello"; -> String variable 
s= {'H', 'e', 'l', 'l', 'o', '\0'};
*/

#include <stdio.h>
int main (){
    char name[7]= "Rounak";
    printf("%s\n", name);
    printf("This is a char variable, reason for length 7 is because last charcater would be backslash 0; undefining it \
         will cause an undefined behaviour ");
    
        

}