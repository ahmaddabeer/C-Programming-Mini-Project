#include <stdio.h>

int main()
{
    int n, atomicNumber;

    printf("Welcome to the Modern Periodic Table\n\n");

    printf("> Enter 1 to know about an element\n");
    printf("> Enter 2 to close the periodic table\n");
    printf("ENTER: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("\nEnter the atomic number of the element (1 to 5): ");
        scanf("%d", &atomicNumber);

        // Check the atomic number
        if (atomicNumber == 1)
        {
            printf("\nName: Hydrogen\n");
            printf("Symbol: H\n");
            printf("Atomic Number: 1\n");
            printf("Electronic Configuration: 1s^1\n");
            printf("Discovered By: Henry Cavendish\n");
            printf("Charge: +1\n");
        }
        else if (atomicNumber == 2)
        {
            printf("\nName: Helium\n");
            printf("Symbol: He\n");
            printf("Atomic Number: 2\n");
            printf("Electronic Configuration: 1s^2\n");
            printf("Discovered By: Pierre Janssen\n");
            printf("Charge: 0\n");
        }
        else if (atomicNumber == 3)
        {
            printf("\nName: Lithium\n");
            printf("Symbol: Li\n");
            printf("Atomic Number: 3\n");
            printf("Electronic Configuration: 1s^2 2s^1\n");
            printf("Discovered By: Johan August Arfvedson\n");
            printf("Charge: +1\n");
        }
        else if (atomicNumber == 4)
        {
            printf("\nName: Beryllium\n");
            printf("Symbol: Be\n");
            printf("Atomic Number: 4\n");
            printf("Electronic Configuration: 1s^2 2s^2\n");
            printf("Discovered By: Fredrich Wöhler\n");
            printf("Charge: +2\n");
        }
        else if (atomicNumber == 5)
        {
            printf("\nName: Boron\n");
            printf("Symbol: B\n");
            printf("Atomic Number: 5\n");
            printf("Electronic Configuration: 1s^2 2s^2 2p^1\n");
            printf("Discovered By: Joseph-Louis Gay-Lussac\n");
            printf("Charge: +3\n");
        }
        else
        {
            printf("\nInvalid atomic number. Please enter a number between 1 and 5.\n");
        }
    }
    else if (n == 2)
    {
        printf("\nExiting the periodic table. Goodbye!\n");
    }
    else
    {
        printf("\nInvalid choice. Please restart the program.\n");
    }

    return 0;
}
