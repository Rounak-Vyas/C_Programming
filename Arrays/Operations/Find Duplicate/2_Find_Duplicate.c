//extra Space Allowed ($\mathcal{O}(n)$ Time, $\mathcal{O}(n)$ Space)

#include <stdio.h>
#include <stdlib.h>

int find_duplicate(int arr[], int n) {
    // Array to keep track of seen elements, initialized to 0
    int *visited = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            free(visited);
            return arr[i]; // Duplicate found
        }
        visited[arr[i]] = 1;
    }

    free(visited);
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