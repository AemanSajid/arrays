
#include <stdio.h>

void insertSorted(int arr[], int size, int num) {
    int i = size - 1;

    // Shift elements to the right to make space for the new number
    while (i >= 0 && arr[i] > num) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the new number at the correct position
    arr[i + 1] = num;
}

int main() {
    int arr[10];
    int size = 0;

    // Ask the user to enter numbers in sorted order
    printf("Enter numbers in sorted order:\n");
    while (size < 10) {
        printf("Number %d: ", size + 1);
        scanf("%d", &arr[size]);

        // Call the insertSorted function to insert the number in the correct position
        insertSorted(arr, size, arr[size]);

        size++;
    }

    // Display the sorted array
    printf("\nSorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

