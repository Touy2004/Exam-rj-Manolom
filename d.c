#include <stdio.h>

void main()
{
    char name_employee[100], LastName_employee[100];
    int id_employee, salary_employ, OT, suport, tax_percent;
    // input value
    printf("Input id employee: ");
    scanf("%d", &id_employee);
    printf("name employee: ");
    scanf("%s", name_employee);
    printf("last name employee: ");
    scanf("%s", LastName_employee);
    printf("salary employee: ");
    scanf("%d", &salary_employ);
    printf("OT income: ");
    scanf("%d", &OT);
    printf("suport employee: ");
    scanf("%d", &suport);
    printf("tax percent: ");
    scanf("%d", &tax_percent);
    // calculate salary
    int total_salary = salary_employ + OT + suport;
    int after_tax = total_salary - ((tax_percent * total_salary) / 100);
    // print value
    printf("id employ: %d\n", id_employee);
    printf("name employee: %s\n", name_employee);
    printf("last name employee: %s\n", LastName_employee);
    printf("salary employee %d\n", salary_employ);
    printf("OT income: %d\n", OT);
    printf("suport employee: %d\n", suport);
    printf("Total: %d\n", total_salary);
    printf("After tax: %d\n", after_tax);
}