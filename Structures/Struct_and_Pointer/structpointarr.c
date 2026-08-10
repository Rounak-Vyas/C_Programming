// an array whose elements points to structure data type 

#include <stdio.h>
struct node
{
    int a;
    char c;
};

int main (){
    struct node *s[5];  // array s containing 5 elements, each pointing to a struct node data type 
    struct node s0,s1,s2,s3,s4;
    s[0]= &s0;
    s[0]->a= 10;
    s[0]->c = 'A';
    s[1]= &s1;
    s[1]->a = 20;
    s[2]= &s2;
    s[2]->c = 'C';
    printf("%d %d", s[0]->a,s[1]->a);
}
 

// to make an array of actual structres data types and not *pointer of structures data types* refer arrofstruct file