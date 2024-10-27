#include <stdio.h>

#define MAX 10

void sumRowColumn(int a[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += a[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, rowSum);
    }

    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += a[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, colSum);
    }
}

int main() {
    int a[MAX][MAX], rows, cols;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    sumRowColumn(a, rows, cols);

    return 0;
}
