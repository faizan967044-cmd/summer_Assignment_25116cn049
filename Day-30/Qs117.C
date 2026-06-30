#include <stdio.h>
#include <string.h>

#define MAX 50

int main()
{
    int n, i;
    int roll[MAX];
    char name[MAX][50];
    float marks[MAX];

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student records
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    // Display student records
    printf("\n\n----- Student Records -----\n");
    printf("Roll No\tName\t\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}