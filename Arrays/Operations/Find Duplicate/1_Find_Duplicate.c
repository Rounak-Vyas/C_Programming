#include <stdio.h>

int find_duplicate(int arr[], int n) {
    // Brute force: compare each element with every other (O(n^2))
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i]; // Duplicate found
            }
        }
    }

    return -1; // Should 
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