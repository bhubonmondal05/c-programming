#include <stdio.h>

int main() {
    
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], temp[n], j = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int duplicate = 0;
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            temp[j++] = arr[i];
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}
