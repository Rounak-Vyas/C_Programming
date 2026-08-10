// allows execution at least one 


// Ask user to enter a number until she enters 0
#include <stdio.h>
int main (){
    int n; 
    do {
        printf("Enter an integer:");
        scanf("%d",&n);
    } while(n!=0);

    return 0;
}

// DISCLAIMER : don't enter a char it will start infinite loop