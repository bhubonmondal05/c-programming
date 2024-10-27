#include <stdio.h>

struct company {
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployee;
};

int main() {
    struct company comp;

    printf("Enter company name: ");
    fgets(comp.name, sizeof(comp.name), stdin);

    printf("Enter company address: ");
    fgets(comp.address, sizeof(comp.address), stdin);

    printf("Enter company phone: ");
    fgets(comp.phone, sizeof(comp.phone), stdin);

    printf("Enter number of employees: ");
    scanf("%d", &comp.noOfEmployee);

    printf("\nCompany Details:\n");
    printf("Name: %s", comp.name);
    printf("Address: %s", comp.address);
    printf("Phone: %s", comp.phone);
    printf("Number of Employees: %d\n", comp.noOfEmployee);

    return 0;
}
