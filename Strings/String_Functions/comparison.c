/*This code demonstrates the use of string comparison functions : 
Parameters of comparison : 
    1. Length : if length of str1 < str2 then; str is considered smaller.
    2. Characters Stored : Each character of the strings is compared based on ascii values, if i^th char is equal than i^th +1 char is compared
        Order:  Space -> Digits -> Upper Case -> Lower Case 

        character comparison is done first (Explained in code )
    3. strcmp returns int values ->  -ve values (str1<str2), 0 (str1 = str2), +ve value(str1>str2)*/

#include <stdio.h>
#include <string.h>
int main () {
    char *str1 = "abcd";
    char *str2 = "abc";
    char *str3 = "bacd";
    char *str4 = "abdc";
    char *str5 = "bac";
    char *str6 = "abcde";

    int a = strcmp(str1,str2);  
    printf("%d\n",a);

    int b = strcmp(str1,str5);
    printf("%d\n",b);
 
    int c = strcmp(str1,str6);
    printf("%d\n",c);

    /*Inference :
    The characters are compared first;  suppose for example -> till ith term;if both str1 and str 2 have 
    same values , but at ith +1 -> str1 has some value but str 2 doesn't , then str1 is declared greater 
    BUT -> if str 2 has its first character or any ith character greater than str 1 , then str 2 would be considered
    greater regardless of the length 
    */
    return 0;

}
    