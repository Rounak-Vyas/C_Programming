#include <stdio.h>
#define N 5

int main() {
    int a[N], *p;
    printf("Enter %d elements in the array: ", N);
    for(p=a; p <= a+N-1; p++)   // p = a = &a[0] -> p++ -> &[a+1]      
        scanf("%d", p);      // scanf("%d", &a[0]);
        
    printf("Elements in reverse order:\n");
    for(p = a+N-1; p >= a; p--)
        printf("%d ", *p);
        
    return 0;
}