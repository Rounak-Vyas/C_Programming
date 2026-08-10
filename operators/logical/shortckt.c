#include <stdio.h>

int main() {
    int a = 5, b = 3;
    int incr;
    
    incr = (a < b) && (b++);
    printf("%d\n", incr);
    printf("%d", b);
    return 0;
}

/*Short circuit in case of &&: simply means if there is a condition anywhere in the expression that returns false,
then the rest of the conditions after that will not be evaluated.
here b++ is a operation, still would be considered as statement and if the value returned is greater than 0 ; TRUE
*/