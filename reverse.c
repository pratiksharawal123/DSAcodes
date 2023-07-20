// Write a program to find the reverse of a given number.
#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    printf("The reverse of the number is: %d\n", reversedNumber);

    return 0;
}
