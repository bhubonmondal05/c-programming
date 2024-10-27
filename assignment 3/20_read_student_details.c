#include <stdio.h>

struct student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float marks;
};

void displayDetails(struct student s) {
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", s.rollNo);
    printf("Name: %s", s.name);
    printf("Address: %s", s.address);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct student students[12];

    for (int i = 0; i < 12; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &students[i].rollNo);
        getchar(); // To consume the newline character after entering Roll No

        printf("Enter Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);

        printf("Enter Age: ");
        scanf("%d", &students[i].age);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    for (int i = 0; i < 12; i++) {
        displayDetails(students[i]);
    }

    return 0;
}
