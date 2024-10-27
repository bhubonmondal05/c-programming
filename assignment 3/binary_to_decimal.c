#include <stdio.h>
#include <math.h>

int main() {
    int binary[32], n, decimal = 0;

    printf("Enter the number of bits in the binary number: ");
    scanf("%d", &n);

    printf("Enter the binary number:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &binary[i]);
    }

    for (int i = 0; i < n; i++) {
        if (binary[i] == 1) {
            decimal += pow(2, n - 1 - i);
        }
    }

    printf("Decimal number: %d\n", decimal);
    return 0;
}
