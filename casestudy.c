//atm_application

#include <stdio.h>

int main()
{
    double balance, amount;
    int choice;

    printf("Enter current account balance: ");
    scanf("%lf", &balance);

    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch ()
    {
        case 1:
            printf("Current balance: Rs. %.2f\n", balance);
            break;

        case 2:
            printf("Enter withdrawal amount: ");
            scanf("%lf", &amount);

            if (amount > 0 && amount <= balance)
            {
                balance = balance - amount;
                printf("Transaction successful\n");
                printf("Remaining balance: Rs. %.2f\n", balance);
            }
            else if (amount > balance)
            {
                printf("Insufficient balance\n");
            }
            else
            {
                printf("Invalid amount\n");
            }
            break;

        case 3:
            printf("Enter deposit amount: ");
            scanf("%lf", &amount);

            if (amount > 0)
            {
                balance = balance + amount;
                printf("Deposit successful\n");
                printf("Updated balance: Rs. %.2f\n", balance);
            }
            else
            {
                printf("Invalid amount\n");
            }
            break;

        default:
            printf("Invalid option\n");
    }

    return 0;
}
