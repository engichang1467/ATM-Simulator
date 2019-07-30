#include <stdio.h>

float balance = 0;
int anotherTransaction;

void transaction()
{
    int choice;
    printf("\nEnter any option to be served!\n\n");
    printf("1. Withdraw\n");
    printf("2. Deposit\n");
    printf("3. Balance\n\n");
    scanf("%d", &choice);
    int amountToWithDraw;
    int amountToDeposit;

    switch (choice)
    {
    case 1:
        // Withdraw
        printf("\nPlease enter amount to withdraw: ");
        scanf("%d", &amountToWithDraw);
        if (amountToWithDraw > balance)
        {
            printf("There is no insufficient funds in your account");
            printf("Do you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
            scanf("%d", &anotherTransaction);
            if (anotherTransaction == 1)
                transaction();
        }
        else
        {
            balance -= amountToWithDraw;
            printf("You have withdrawn %d and your new balance is $%.2f ", amountToWithDraw, balance);
            printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
            scanf("%d", &anotherTransaction);
            if (anotherTransaction == 1)
                transaction();
        }
        break;

    case 2:
        // Deposit
        printf("\nPlease enter amount to deposit: ");
        scanf("%d", &amountToDeposit);

        balance += amountToDeposit;

        printf("Thank you for depositing, new balance is: $%.2f", balance);
        printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
        scanf("%d", &anotherTransaction);
        if (anotherTransaction == 1)
            transaction();
        break;
    
    case 3:
        printf("\nYour bank balance is: $%f", balance);
        printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");
        scanf("%d", &anotherTransaction);
        if (anotherTransaction == 1)
            transaction();
        break;
    }
}

int main()
{
    transaction();
    return 0;
}
