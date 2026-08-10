#include <stdio.h>
int main (){
int a = 1;
int b = 1;
int c = ++a || b++;
int d = b-- && --a;

printf("%d %d %d %d", d, c, b, a);
}


//  keep short circuit rule in mind while evaluating the answer 
// -> 1101 ; 0 because , b never got incremented due to or operator shtckt rule 