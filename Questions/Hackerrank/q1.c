#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{

    char c;
    int MAX_LEN;
    scanf("%d",&MAX_LEN);
    char s[20],sen[MAX_LEN];
    scanf("%c",&c);
    printf("%c\n",c);
    scanf("%s",s);
    printf("%s\n",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%s",sen);
    
    return 0;
}