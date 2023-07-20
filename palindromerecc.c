// Write a program to check whether a given string is a palindrome or not using recursion.
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end);

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

int isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1; // Base case: single character or empty string
    }

    if (str[start] != str[end]) {
        return 0; // Not a palindrome
    }

    return isPalindrome(str, start + 1, end - 1); // Recursive call
}
