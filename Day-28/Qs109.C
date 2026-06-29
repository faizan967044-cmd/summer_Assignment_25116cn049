#include <stdio.h>
#include <string.h>

struct Library
{
    int book_id;
    char book_name[50];
    char author[50];
    int quantity;
};

int main()
{
    struct Library book[100];
    int n = 0, choice, i, id, found;

    while (1)
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &book[n].book_id);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", book[n].book_name);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", book[n].author);

                printf("Enter Quantity: ");
                scanf("%d", &book[n].quantity);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\nID\tBook Name\t\tAuthor\t\tQuantity\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t\t%s\t\t%d\n",
                               book[i].book_id,
                               book[i].book_name,
                               book[i].author,
                               book[i].quantity);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (book[i].book_id == id)
                    {
                        printf("\nBook Found!\n");
                        printf("ID: %d\n", book[i].book_id);
                        printf("Name: %s\n", book[i].book_name);
                        printf("Author: %s\n", book[i].author);
                        printf("Quantity: %d\n", book[i].quantity);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book Not Found!\n");
                break;

            case 4:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (book[i].book_id == id)
                    {
                        if (book[i].quantity > 0)
                        {
                            book[i].quantity--;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book Not Available!\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book Not Found!\n");
                break;

            case 5:
                printf("Enter Book ID to Return: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (book[i].book_id == id)
                    {
                        book[i].quantity++;
                        printf("Book Returned Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book Not Found!\n");
                break;

            case 6:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}