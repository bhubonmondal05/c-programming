#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, sum = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;
    while (original != 0) {
        digit = original % 10;
        sum += factorial(digit);
        original /= 10;
    }
    
    if (sum == num)
        printf("%d is a strong number.\n", num);
    else
        printf("%d is not a strong number.\n", num);
    
    return 0;
}
