#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    int math[n], english[n], total[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Mathematics marks for student %d: ", i + 1);
        scanf("%d", &math[i]);
        printf("Enter English marks for student %d: ", i + 1);
        scanf("%d", &english[i]);
        total[i] = math[i] + english[i];
    }

    printf("Total marks of students are:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, total[i]);
    }

    return 0;
}
