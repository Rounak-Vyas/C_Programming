#include <stdio.h>
int main (){
    printf("here is the info upon char data type\n");
    printf("The data size of character is: %d\n", sizeof(char));
    printf("Hence a char variable could only store 1 charcacter\n");

    char ex = 'a';  // use single apposstrphy and not double
    char ex1= 65;
    printf("%c %c\n", ex,ex1);

    unsigned char a = 130;
    printf("%c\n",a);
    char b1= -126;
    printf("%c\n",b1);
    char b = 130;  // becomes -126 again hence same char gets the print
    printf("%c\n",b);
  
    // will give wrong output , c will interpret as 2 byte variable , assignins a pointer (address) to an integer (char)."
    char x = "A";
    printf("%c",x);

 return 0;

}