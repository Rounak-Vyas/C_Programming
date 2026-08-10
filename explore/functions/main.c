#include <stdio.h>
int fun(int, int);
int increment (int);

int main()
{
    int sum = fun(3, 4);
    printf("%d\n", sum);

    int sum2 = increment(sum);
    printf("%d\n", sum2);


    return 0;
}