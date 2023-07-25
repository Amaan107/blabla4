//5.	Write a program to find the sum of 2 numbers returning a pointer.
#include <stdio.h>
int* sumOfNumbers(int num1, int num2) {
    int* sum;
    *sum = num1 + num2;
    return sum;
}
int main() {
    int num1 = 10;
    int num2 = 20;
    int* result = sumOfNumbers(num1, num2);
    printf("Sum: %d\n", *result);
    
}

