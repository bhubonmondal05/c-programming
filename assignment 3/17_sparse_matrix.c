#include <stdio.h>
#define MAX 10
int isSparseMatrix(int a[MAX][MAX], int rows, int cols) {
    int zeroCount = 0, totalElements = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    if (zeroCount > totalElements / 2) {
        return 1;
    } else {
        return 0;
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

    if (isSparseMatrix(a, rows, cols)) {
        printf("It is a sparse matrix\n");
    } else {
        printf("It is not a sparse matrix\n");
    }}
