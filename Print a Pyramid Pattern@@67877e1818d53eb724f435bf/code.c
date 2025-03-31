#include <stdio.h>

int main() {
    int n;

    
    for (int i = 1; i <= n; i++) {          // Outer loop for rows
        for (int j = i; j < n; j++) {       // Print spaces to align stars
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {  // Print stars in the pyramid
            printf("*");
        }
        printf("\n");                       // Move to the next line after each row
    }

    return 0;
}