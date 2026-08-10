#include <stdio.h>

#pragma pack(1)
struct abc {
    char a;
    int b;
    char c;

};

int main (){
    struct abc sl;
    printf("%d",sizeof(sl));
}