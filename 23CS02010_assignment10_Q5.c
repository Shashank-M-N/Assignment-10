#include <stdio.h>

typedef enum PayType
{
    HOURLY = 1,
    SALARY = 2
} PayType;

typedef union EmpDetails
{
    float hourly_wage;
    double fixed;
    PayType paytype2;
} employee_details;

struct employee
{
    int employeeID;
    char name[50];
    employee_details emp1;
    PayType paytype1;
} emp;

int main()
{
    int n;
    printf("Enter the employee id : ");
    scanf("%d", &emp.employeeID);
    getchar();
    printf("Enter employee name : ");
    gets(emp.name);
label:
    printf("1.Hourly wage\n2.Fixed salary\n");
    scanf("%d", &n);
    switch (n)
    {
    case HOURLY:
        emp.paytype1 = HOURLY;
        emp.emp1.paytype2 = HOURLY;
        printf("Enter hourly wage: ");
        scanf("%f", &emp.emp1.hourly_wage);
        break;
    case SALARY:
        emp.paytype1 = SALARY;
        emp.emp1.paytype2 = SALARY;
        printf("Enter fixed Salary: ");
        scanf("%lf", &emp.emp1.fixed);
        break;
    default:
        printf("Wrong choice\n");
        goto label;
    }
    if (emp.paytype1 == HOURLY)
    {
        printf("Employee ID: %d\n", emp.employeeID);
        printf("Employee name: %s\n", emp.name);
        printf("Employee hourly wage: %f", emp.emp1.hourly_wage);
    }
    if (emp.paytype1 == SALARY)
    {
        printf("Employee ID: %d\n", emp.employeeID);
        printf("Employee name: %s\n", emp.name);
        printf("Employee fixed salary: %lf", emp.emp1.fixed);
    }
    return 0;
}