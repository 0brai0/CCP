#include <stdio.h>

int main() {
    int number, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    if (number == 0) {
        printf("The factorial of 0 is 1.\n");
        return 0;
    }

    int i = number;
    do {
        factorial *= i;
        i--;
    } while (i > 1);

    printf("The factorial of %d is %d.\n", number, factorial);
    return 0;
}
