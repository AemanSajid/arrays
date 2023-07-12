#include <stdio.h>

int main() {
    int arr1[] = {2, 7, 9, 3, 6};
    int arr2[] = {3, 5, 7, 9, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Different numbers: ");
    // Iterate over elements of arr1
    for (int i = 0; i < size1; i++) {
        int found = 0;
        // Check if the current element of arr1 is present in arr2
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        // If the element is not found in arr2, print it
        if (!found) {
            printf("%d ", arr1[i]);
        }
    }
    printf("\n");

    // Iterate over elements of arr2
    for (int i = 0; i < size2; i++) {
        int found = 0;
        // Check if the current element of arr2 is present in arr1
        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }
        // If the element is not found in arr1, print it
        if (!found) {
            printf("%d ", arr2[i]);
        }
    }
    printf("\n");

    return 0;}

