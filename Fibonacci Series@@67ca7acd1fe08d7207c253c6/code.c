#include <stdio.h>

// Function to generate Fibonacci sequence
void fibonacciSeries(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);  // Print the current term
        nextTerm = t1 + t2; // Calculate the next term
        t1 = t2;            // Update the first term
        t2 = nextTerm;      // Update the second term
    }
}
