#include <stdio.h>

int main() {
    float a, x, b, result;
    
    printf("Enter values for a, x, and b: ");
    scanf("%f %f %f", &a, &x, &b);
    
    if (a * x - b == 0) {
        printf("Division by zero error.\n");
    } else {
        result = (a * x + b) / (a * x - b);
        printf("Result = %.2f\n", result);
    }
    
    return 0;
}
