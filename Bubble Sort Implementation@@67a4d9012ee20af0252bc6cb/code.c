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
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Print each element separated by a space
    }
    printf("\n");               // Move to the next line after printing the array
}

