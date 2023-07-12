#include <stdio.h>

int main() {
    int numbers[] = {2, 7, 9, 3, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    // Calculate the sum of the numbers in the array
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    // Display the sum
    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}

#include <stdio.h>

int main() {
    int numbers[] = {2, 7, 9, 3, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    // Calculate the sum of the odd numbers in the array
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }

    // Display the sum of the odd numbers
    printf("The sum of the odd numbers is: %d\n", sum);

    return 0;
}

