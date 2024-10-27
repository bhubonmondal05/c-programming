#include <stdio.h>

int is_even(int n) {
    return n % 2 == 0;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (is_even(num))
        printf("The number %d is even.\n", num);
    else
        printf("The number %d is odd.\n", num);
    
    return 0;
}
