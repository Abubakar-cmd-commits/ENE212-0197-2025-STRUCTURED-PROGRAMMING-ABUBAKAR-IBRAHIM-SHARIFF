#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pin;
    int correctPin = 1234;
    int choice;
    int i;
    int access = 0;

    for (i = 1; i <= 3 && access == 0; i++)
    {
        printf("Enter 4 digit PIN: ");
        scanf("%d", &pin);

        if (pin < 1000)
            printf("PIN is too short (must be 4 digits)\n");

        else if (pin > 9999)
            printf("PIN is too long (must be 4 digits)\n");

        else
        {
            printf("PIN is exactly 4 digits\n");

            if (pin == correctPin)
            {
                printf("Correct PIN! Access granted.\n");
                access = 1;
            }
            else
                printf("Wrong PIN!\n");
        }

        if (access == 0)
            printf("Remaining attempts: %d\n", 3 - i);
    }

    if (access == 0)
    {
        printf("System locked! Wait for 5 seconds...\n");

        for (i = 5; i >= 1; i--)
            printf("%d...\n", i);

        printf("You can try again now.\n");
    }
    else
    {
        printf("\nDEVICE MENU\n");
        printf("1. Open Door\n");
        printf("2. Change Username\n");
        printf("3. Change PIN\n");
        printf("4. Exit\n");

        printf("Choose option: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Access granted. Door unlocked\n");
                break;

            case 2:
                printf("Change username feature coming soon.\n");
                break;

            case 3:
                printf("Change PIN feature coming soon.\n");
                break;

            case 4:
                printf("Exiting system.\n");
                break;

            default:
                printf("Invalid option! Please try again.\n");
        }
    }

    return 0;
}
