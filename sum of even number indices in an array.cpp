#include <stdio.h>

int main() {
    int numbers[] = {2, 7, 9, 3, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    // Calculate the sum of numbers at even indexes in the array
    for (int i = 0; i < size; i += 2) {
        sum += numbers[i];
    }

    // Display the sum of numbers at even indexes
    printf("The sum of numbers at even indexes is: %d\n", sum);

    return 0;
}

