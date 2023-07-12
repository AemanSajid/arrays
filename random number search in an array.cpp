#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to search for a number in the array
int searchNumber(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int numbers[10];
    int searchNum;

    // Seed the random number generator
    srand(time(0));

    // Assign 10 random numbers to the array
    for (int i = 0; i < 10; i++) {
        numbers[i] = rand() % 100;
    }

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &searchNum);

    // Call the searchNumber function to check if the number exists in the array
    int index = searchNumber(numbers, 10, searchNum);

    // Display the result
    if (index != -1) {
        printf("Number found at index: %d\n", index);
    } else {
        printf("Number not found.\n");
    }

    return 0;
}

