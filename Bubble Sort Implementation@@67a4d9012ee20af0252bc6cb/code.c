#include <stdio.h>

// Bubble Sort Function
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {        
        for (j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) {   
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Main function to test
int main() {
    int arr[] = {5, 3, 8, 6, 2}; // Example input
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, n);  // Sort the array

    // Output the sorted array
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}