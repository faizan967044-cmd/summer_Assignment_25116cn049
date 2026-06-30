#include <stdio.h>

#define MAX 50

int main()
{
    int empId[MAX];
    char empName[MAX][50];
    float salary[MAX];
    int n, i;

    printf("===== Employee Management System =====\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", empName[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee details
    printf("\n\n===== Employee Records =====\n");
    printf("ID\tName\t\tSalary\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\n",
               empId[i], empName[i], salary[i]);
    }

    return 0;
}