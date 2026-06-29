#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact contacts[100];
    int n = 0, choice, i, found;
    char searchName[50];

    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", contacts[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", contacts[n].phone);

                n++;
                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No contacts available.\n");
                }
                else
                {
                    printf("\n--- Contact List ---\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d. Name : %s\n", i + 1, contacts[i].name);
                        printf("   Phone: %s\n", contacts[i].phone);
                    }
                }
                break;

            case 3:
                printf("Enter Name to Search: ");
                scanf(" %[^\n]", searchName);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(strcmp(contacts[i].name, searchName) == 0)
                    {
                        printf("\nContact Found!\n");
                        printf("Name : %s\n", contacts[i].name);
                        printf("Phone: %s\n", contacts[i].phone);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Contact Not Found!\n");
                break;

            case 4:
                printf("Enter Name to Delete: ");
                scanf(" %[^\n]", searchName);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(strcmp(contacts[i].name, searchName) == 0)
                    {
                        int j;
                        for(j = i; j < n - 1; j++)
                        {
                            contacts[j] = contacts[j + 1];
                        }
                        n--;
                        found = 1;
                        printf("Contact Deleted Successfully!\n");
                        break;
                    }
                }

                if(!found)
                    printf("Contact Not Found!\n");
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}