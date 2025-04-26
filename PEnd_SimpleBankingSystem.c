#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.0, amount;

    while (1) {
        printf("\n--- Simple Banking System ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is: %.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount deposited successfully!\n");
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if (amount > balance)
                    printf("Insufficient balance!\n");
                else {
                    balance -= amount;
                    printf("Amount withdrawn successfully!\n");
                }
                break;
            case 4:
                printf("Thank you for using the banking system.\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Output:
// --- Simple Banking System ---
// 1. Check Balance
// 2. Deposit
// 3. Withdraw
// 4. Exit
// Enter your choice: 1
// Your balance is: 1000.00
