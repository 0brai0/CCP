#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {
    int choice;
    float area;

    printf("Select the shape:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            float radius;
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = PI * pow(radius, 2);
            break;
        }
        case 2: {
            float length, width;
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            break;
        }
        case 3: {
            float side;
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = pow(side, 2);
            break;
        }
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printf("The area of the selected shape is: %.2f\n", area);
    return 0;
}
