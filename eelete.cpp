#include <stdio.h>

// Function to take input for matrix
void takeMatrixInput(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter the elements of the matrix:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at row %d and column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print the matrix
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Matrix:\n");
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the matrix
    int matrix[rows][cols];

    // Take input for the matrix
    takeMatrixInput(rows, cols, matrix);

    // Print the matrix
    printMatrix(rows, cols, matrix);

    return 0;
}

