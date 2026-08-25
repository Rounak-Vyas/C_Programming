#include <stdio.h>
#include <stdlib.h>

int find_duplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]);

        // If the value at index is already negative, it was visited before
        if (arr[index] < 0) {
            return index; // Duplicate found
        }
        
        // Mark as visited by negating (handling 0 with a offset/flag if 0 is present)
        arr[index] = -arr[index];
    }
    return -1;
}


int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int result = find_duplicate(arr, n);
    printf("%d", result);
    return 0;
}