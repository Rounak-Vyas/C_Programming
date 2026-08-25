/*
This is the second method of left shifting the array. it uses one helper function with one while loop which 
makes its time complexity O(N)
*/
#include <stdio.h>

// Helper function to reverse a section of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        // Swap elements at positions start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

// Function to rotate the array to the left by k positions
void rotate_left(int arr[], int n, int k) {
    k = k % n;  // Normalize k if it's greater than n

    // Step 1: Reverse first k elements
    reverse(arr, 0, k - 1);

    // Step 2: Reverse remaining n-k elements
    reverse(arr, k, n - 1);

    // Step 3: Reverse the whole array
    reverse(arr, 0, n - 1);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[100];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Rotate the array
    rotate_left(arr, n, k);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i < n-1){
        	printf(" ");
        }
    }

    return 0;
}