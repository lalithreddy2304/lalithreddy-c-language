#include <stdio.h>
#include <string.h>

// Structure declaration
struct Student {
    int roll;
    char name[50];
    float marks;
};

// Using typedef to shorten structure name
typedef struct {
    char brand[30];
    int model;
    float price;
} Car;

// Function that takes structure as argument
void displayStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

// Function that returns a structure
Car createCar(char brand[], int model, float price) {
    Car c;
    strcpy(c.brand, brand);
    c.model = model;
    c.price = price;
    return c;
}

int main() {
    // Initializing structure variable
    struct Student s1 = {101, "Aarav", 88.5};
    displayStudent(s1);

    // Array of structures
    struct Student class[3] = {
        {102, "Bhavana", 92.0},
        {103, "Chirag", 85.5},
        {104, "Diya", 90.2}
    };

    printf("\nClass Students:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s — %.1f marks\n", class[i].roll, class[i].name, class[i].marks);
    }

    // Using typedef structure
    Car car1 = createCar("Tesla", 2024, 55999.50);
    printf("\nCar Details:\nBrand: %s\nModel: %d\nPrice: $%.2f\n", car1.brand, car1.model, car1.price);

    return 0;
}
