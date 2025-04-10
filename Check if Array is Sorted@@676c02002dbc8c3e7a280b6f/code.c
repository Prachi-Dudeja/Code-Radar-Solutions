#include<stdio.h>

int main(){
    int n; 
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) { // Taking input
        scanf("%d", &arr[i]);
    }

    int isSorted = 1; 
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0; 
            break;
        }
    }

    if (isSorted) {
        printf("sorted\n");
    } else {
        printf("not sorted\n");
    }

    return 0;
}