#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].bookId);

        printf("Book Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Author Name: ");
        scanf(" %[^\n]", b[i].author);
    }

    // Display book details
    printf("\n----- Library Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID     : %d\n", b[i].bookId);
        printf("Title       : %s\n", b[i].title);
        printf("Author      : %s\n", b[i].author);
    }

    return 0;
}