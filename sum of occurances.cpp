#include <stdio.h>

void countOccurrences(int arr[], int size) {
    // Create a frequency array to store the count of each number
    int frequency[100] = {0}; // Assuming the numbers in the array are between 0 and 99

    // Count the occurrences of each number
    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }

    // Find the maximum occurrences for each number
    for (int i = 0; i < size; i++) {
        if (frequency[arr[i]] != -1) {
            printf("%d = %d\n", arr[i], frequency[arr[i]]);
            frequency[arr[i]] = -1;
        }
    }
}

int main() {
    int arr[5];

    // Ask the user to enter 5 numbers
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    countOccurrences(arr, 5);

    return 0;
}

