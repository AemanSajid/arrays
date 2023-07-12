#include <stdio.h>

int main() {
    int numbers[10];

    // Ask the user to enter 10 numbers
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    // Check if the array is a palindrome
    int isPalindrome = 1;  // Assume the array is a palindrome
    for (int i = 0, j = 9; i < j; i++, j--) {
        if (numbers[i] != numbers[j]) {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}

