/*This code demonstartes input of an entire sentence along with white space , it will only terminate when found
a \n character */

#include <stdio.h>
int main (){
    char sen[100];
    printf("Enter the sentence :\n");
    char c;
    scanf("%c",&c);
    printf("%c\n",c);

    scanf("\n");  // Reason given below 

    scanf("%[^\n]%*c",sen);
    printf("%s",sen);

    return 0;
}

/*Adding scanf("\n"); (or putting a space before the format specifier, like scanf(" %[^\n]%*c", sen);) tells C 
to consume and discard all leftover whitespace and newline characters from the input buffer.
This clears the buffer so that scanf("%[^\n]%*c", sen) can cleanly wait for and read your actual sentence input.
OR 
Just type scanf("<space>%[^\n]%*c")
*/