#include <stdio.h>
int main (){
    char sentence[100];
    scanf("%[^\n]%*c",sentence);
    printf("%s",sentence);
}