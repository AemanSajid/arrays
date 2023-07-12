#include <stdio.h>

int main() {
    int numbers[5];
    int max;

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

    // Display the maximum value
    printf("The maximum value is: %d\n", max);

    return 0;
}


