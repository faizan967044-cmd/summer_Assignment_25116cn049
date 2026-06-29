#include <stdio.h>

struct BankAccount
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct BankAccount acc;
    int choice;
    float amount;

    printf("===== Create Bank Account =====\n");
    
    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                acc.balance += amount;
                printf("Amount Deposited Successfully!\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= acc.balance)
                {
                    acc.balance -= amount;
                    printf("Amount Withdrawn Successfully!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("Current Balance: %.2f\n", acc.balance);
                break;

            case 4:
                printf("\nAccount Number : %d\n", acc.accNo);
                printf("Account Holder : %s\n", acc.name);
                printf("Balance        : %.2f\n", acc.balance);
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}