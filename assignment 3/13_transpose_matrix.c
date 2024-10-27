#include <stdio.h>
#define MAX 10
void transposeMatrix(int a[MAX][MAX], int rows, int cols) {
    int transpose[MAX][MAX];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
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
    transposeMatrix(a, rows, cols);  }
