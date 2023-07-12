#include <stdio.h>

void countOccurrences(int arr[], int size) {
    // Create a frequency array to store the count of each number
    int frequency[100] = {0}; // Assuming the numbers in the array are between 0 and 99

    // Count the occurrences of each number
    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }

    // Display the number of occurrences for each number
    for (int i = 0; i < 100; i++) {
        if (frequency[i] > 0) {
            printf("Number %d occurs %d time(s)\n", i, frequency[i]);
        }
    }
}

int main() {
    int arr[] = {2, 7, 9, 3, 6, 2, 7, 9, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    countOccurrences(arr, size);

    return 0;
}

