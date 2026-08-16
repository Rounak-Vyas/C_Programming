#include <stdio.h>

void dectobin(int number){
    if (number == 0) {
        printf("0");
        return;
    }

    int buffer[32];
    int i = 0;

    // 1. Change condition to number > 0 so the last bit (when number becomes 1) is included
    while(number > 0){
        buffer[i] = number % 2; // (number % 2 == 1 ? 1 : 0) simplifies to just (number % 2)
        i++;
        number /= 2;
    }

    // 2. Start printing from (i - 1) because 'i' points to the next empty index
    for(i = i - 1; i >= 0; i--){
        printf("%d", buffer[i]);
    }
}

int main (){
    printf("Enter the number: ");
    int num;
    scanf("%d",&num);
    dectobin(num);
}

