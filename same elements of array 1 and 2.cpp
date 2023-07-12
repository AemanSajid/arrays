#include <stdio.h>

int main() {
    int arr1[] = {2, 7, 9, 3, 6};
    int arr2[] = {3, 5, 7, 9, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Common numbers: ");
    // Iterate over elements of arr1
    for (int i = 0; i < size1; i++) {
        // Check if the current element of arr1 is present in arr2
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}

