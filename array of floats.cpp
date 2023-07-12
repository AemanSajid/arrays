#include <stdio.h>

int main() {
    // Declare an array of size 5
    float numbers[5];

    // Populate the array with numbers
    numbers[0] = 1.5;
    numbers[1] = 2.7;
    numbers[2] = 3.9;
    numbers[3] = 4.2;
    numbers[4] = 5.0;

    // Display the array
    printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", numbers[i]);
    }
    printf("\n");

    return 0;
}

