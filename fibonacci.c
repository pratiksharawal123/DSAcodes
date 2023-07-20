// Write a program to print the Fibonacci series up to a given number.
#include <stdio.h>

int main() {
    int limit, num1 = 0, num2 = 1, nextTerm;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Fibonacci Series up to %d:\n", limit);
    printf("%d, %d, ", num1, num2);

    nextTerm = num1 + num2;

    while (nextTerm <= limit) {
        printf("%d, ", nextTerm);
        num1 = num2;
        num2 = nextTerm;
        nextTerm = num1 + num2;
    }

    printf("\n");

    return 0;
}
