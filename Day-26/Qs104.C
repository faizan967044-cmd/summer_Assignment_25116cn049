#include <stdio.h>

int main()
{
    int empId;
    char name[50];
    float basicSalary, hra, da, grossSalary;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    hra = basicSalary * 0.20;  // 20% HRA
    da  = basicSalary * 0.10;  // 10% DA

    grossSalary = basicSalary + hra + da;

    printf("\n----- Salary Details -----\n");
    printf("Employee ID   : %d\n", empId);
    printf("Employee Name : %s\n", name);
    printf("Basic Salary  : %.2f\n", basicSalary);
    printf("HRA (20%%)     : %.2f\n", hra);
    printf("DA (10%%)      : %.2f\n", da);
    printf("Gross Salary  : %.2f\n", grossSalary);

    return 0;
}