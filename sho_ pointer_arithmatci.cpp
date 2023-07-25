//8.	Write a program to show pointer arithmatci
#include <stdio.h>
int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;
    printf("Address \t Value\n");
    printf("%p \t %d\n", ptr, *ptr);
    ptr++; // Increment the pointer by 1 (moving to the next element)
    printf("%p \t %d\n", ptr, *ptr);
    ptr += 2; // Increment the pointer by 2 (moving two elements ahead)
    printf("%p \t %d\n", ptr, *ptr);
    ptr--; // Decrement the pointer by 1 (moving back to the previous element)
    printf("%p \t %d\n", ptr, *ptr);
    return 0;
}

