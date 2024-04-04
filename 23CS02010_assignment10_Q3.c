#include <stdio.h>

struct employee
{
    int employeeID;
    char name[50];
    union Empdetails
    {
        float wage;
        double salary;
    } employee_details;
} employees;

int main()
{
    int choice;

    printf("Enter the employee id : ");
    scanf("%d", &employees.employeeID);
    getchar();
    printf("Enter employee name : ");
    gets(employees.name);
label:
    printf("1.Hourly wage\n2.Fixed salary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter hourly wage: ");
        scanf("%f", &employees.employee_details.wage);

        printf("Employee ID : %d\n", employees.employeeID);
        printf("Employee Name : ");
        puts(employees.name);
        printf("Hourly wage: %f", employees.employee_details.wage);
        break;
    case 2:
        printf("Enter Fixed salary : ");
        scanf("%f", &employees.employee_details.salary);

        printf("Employee ID : %d\n", employees.employeeID);
        printf("Employee Name : ");
        puts(employees.name);
        printf("Fixed salary : %f", employees.employee_details.salary);
        break;
    default:
        printf("Invalid choice\n");
        goto label;
    }
    return 0;
}