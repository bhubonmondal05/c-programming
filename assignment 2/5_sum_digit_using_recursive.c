#include <stdio.h>

int sum_of_digits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sum_of_digits(num));
    return 0;
}
