#include <stdio.h>

void reverse_number(int n) {
    if (n == 0)
        return;
    printf("%d", n % 10);
    reverse_number(n / 10);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Reversed number: ");
    reverse_number(num);
    printf("\n");
    return 0;
}
