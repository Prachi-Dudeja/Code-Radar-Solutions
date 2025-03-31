void printArray(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {        // Outer loop for passes
        for (j = 0; j < n - i - 1; j++) { // Inner loop for comparisons
            if (arr[j] > arr[j + 1]) {   // Swap if elements are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}