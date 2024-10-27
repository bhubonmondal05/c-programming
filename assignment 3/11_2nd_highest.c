#include <stdio.h>

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int first, second;

    if (size < 2) {
        printf("Array has less than two elements\n");
        return 0;
    }

    first = second = -2147483648; 

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -2147483648) {
        printf("There is no second highest element\n");
    } else {
        printf("The second highest element is %d\n", second);
    }
}
