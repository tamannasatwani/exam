#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    printf("Enter a 3-digit positive integer: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Invalid input! Please enter a 3-digit positive integer.\n");
        return 1; 
    }

    lastDigit = num % 10;

    firstDigit = num / 100;

    
    sum = firstDigit + lastDigit;

    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}
