#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 5

int main()
{
    char books[MAX_BOOKS][50];
    int issued[MAX_BOOKS] = {0};
    int choice, i, bookNo;

    // Initial book records
    strcpy(books[0], "C Programming");
    strcpy(books[1], "Data Structures");
    strcpy(books[2], "Operating System");
    strcpy(books[3], "Computer Networks");
    strcpy(books[4], "Database Management");

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Display Books\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nAvailable Books:\n");
                for(i = 0; i < MAX_BOOKS; i++)
                {
                    printf("%d. %s", i + 1, books[i]);

                    if(issued[i])
                        printf(" (Issued)");

                    printf("\n");
                }
                break;

            case 2:
                printf("\nEnter book number to issue: ");
                scanf("%d", &bookNo);

                if(bookNo >= 1 && bookNo <= MAX_BOOKS)
                {
                    if(!issued[bookNo - 1])
                    {
                        issued[bookNo - 1] = 1;
                        printf("Book issued successfully!\n");
                    }
                    else
                    {
                        printf("Book is already issued.\n");
                    }
                }
                else
                {
                    printf("Invalid book number.\n");
                }
                break;

            case 3:
                printf("\nEnter book number to return: ");
                scanf("%d", &bookNo);

                if(bookNo >= 1 && bookNo <= MAX_BOOKS)
                {
                    if(issued[bookNo - 1])
                    {
                        issued[bookNo - 1] = 0;
                        printf("Book returned successfully!\n");
                    }
                    else
                    {
                        printf("Book was not issued.\n");
                    }
                }
                else
                {
                    printf("Invalid book number.\n");
                }
                break;

            case 4:
                printf("Exiting Library System...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}