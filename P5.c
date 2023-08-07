#include <stdio.h>

struct Destination {
    char name[50];
    float expenses_per_person;
};

int main() {
    struct Destination destinations[] = {
        { "Destination 1", 1000 },
        { "Destination 2", 1500 },
        { "Destination 3", 1200 },
        { "Destination 4", 2000 },
        { "Destination 5", 1800 }
    };

    int num_family_members;
    printf("Enter the number of family members: ");
    scanf("%d", &num_family_members);

    printf("\nBudget for various destinations based on %d family members:\n", num_family_members);
    for (int i = 0; i < 5; i++) {
        float total_budget = num_family_members * destinations[i].expenses_per_person;
        printf("%s: %.2f\n", destinations[i].name, total_budget);
    }

    return 0;
}
