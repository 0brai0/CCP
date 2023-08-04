#include <stdio.h>

int main() {
    char key;

    printf("Enter a key: ");
    scanf("%c", &key);

    if ((key >= 'a' && key <= 'z') || (key >= 'A' && key <= 'Z')) {
        printf("The key pressed is an alphabet.\n");
    } else if (key >= '0' && key <= '9') {
        printf("The key pressed is a number.\n");
    } else {
        printf("The key pressed is neither an alphabet nor a number.\n");
    }

    return 0;
}
