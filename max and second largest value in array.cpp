#include <stdio.h>

int main() {
    int numbers[5];
    int max, secondMax;

    // Ask the user to enter 5 numbers
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    // Find the maximum value in the array
    max = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Find the second largest value in the array
    secondMax = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > secondMax && numbers[i] < max) {
            secondMax = numbers[i];
        }
    }

    // Display the second largest value
    printf("The second largest value is: %d\n", secondMax);

    return 0;
}


