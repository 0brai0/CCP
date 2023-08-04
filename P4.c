#include <stdio.h>

int main() {
    int sum_for = 0;
    int sum_while = 0;
    int sum_do_while = 0;

    for (int i = 2; i < 100; i += 3) {
        sum_for += i;
    }

    int i = 2;
    while (i < 100) {
        sum_while += i;
        i += 3;
    }

    i = 2;
    do {
        sum_do_while += i;
        i += 3;
    } while (i < 100);

    printf("Sum using for loop: %d\n", sum_for);
    printf("Sum using while loop: %d\n", sum_while);
    printf("Sum using do-while loop: %d\n", sum_do_while);
    return 0;
}
