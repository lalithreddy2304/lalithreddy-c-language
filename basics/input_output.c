#include <stdio.h>

int main() {
    int number;
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter any number: ");
    scanf("%d", &number);

    printf("\nName: %s\n", name);
    printf("Number: %d\n", number);

    return 0;
}
