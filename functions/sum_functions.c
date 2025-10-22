#include <stdio.h>

// Function declaration
int addNumbers(int a, int b);

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = addNumbers(num1, num2); // Function call

    printf("Sum = %d\n", sum);
    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    return a + b;
}
