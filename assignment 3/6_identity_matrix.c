#include <stdio.h>
#define MAX 10
int isIdentityMatrix(int a[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && a[i][j] != 1) {
                return 0;
            }
            if (i != j && a[i][j] != 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int a[MAX][MAX], n;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    if (isIdentityMatrix(a, n)) {
        printf("It is an identity matrix\n");
    } else {
        printf("It is not an identity matrix\n");
    }}
