#include <stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Pointer ptr stores: %p\n", (void*)ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    *ptr = 20; // modify value using pointer
    printf("New value of a after using pointer: %d\n", a);

    return 0;
}
