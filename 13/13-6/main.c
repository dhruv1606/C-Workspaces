#include <stdio.h>

struct employee
{
    char name[100];
    char hireDate[100];
    float salary;
};

int main()
{
    struct employee emp = {"Mike", "16/7/2015", 76909.00};

    printf("\nName : %s", emp.name);
    printf("\nHire date : %s", emp.hireDate);
    printf("\nSalary: %.2f", emp.salary);

    printf("\nEnter Employee information: \n");
    printf("Name: ");
    scanf("%s", emp.name);
    printf("Hire Date: ");
    scanf("%s", emp.hireDate);
    printf("Salary: ");
    scanf("%f", &emp.salary);

    printf("\nName : %s", emp.name);
    printf("\nHire date : %s", emp.hireDate);
    printf("\nSalary: %.2f", emp.salary);

    return 0;
}
