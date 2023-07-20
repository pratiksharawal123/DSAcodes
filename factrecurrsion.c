// Write a program to find the factorial of a number using recursion.
#include <stdio.h>

unsigned long long factorial(int number);

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long fact = factorial(number);
        printf("Factorial of %d is %llu\n", number, fact);
    }

    return 0;
}

unsigned long long factorial(int number) {
    if (number == 0) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}
