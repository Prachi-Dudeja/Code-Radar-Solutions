#include <stdio.h>

// Function to generate Fibonacci sequence
void generateFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);  // Print the current term
        nextTerm = t1 + t2; // Calculate the next term
        t1 = t2;            // Update the first term
        t2 = nextTerm;      // Update the second term
    }
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);  // Input the number of terms
    generateFibonacci(n);  // Call the function to generate Fibonacci sequence

    return 0;
}