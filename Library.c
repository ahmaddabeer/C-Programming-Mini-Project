#include <stdio.h>
#include <string.h>

int main()
{
    /* Menu options for library management system */
    int choice, i, s = 0; // s initialized to 0
    char name[50][30];    // 2D character array to store up to 50 book names, each with a max length of 30

    // Display menu
    printf(">> Press 1 to Add Book\n");
    printf(">> Press 2 to Search Book\n");
    printf(">> Press 3 to Issue Book\n");
    printf(">> Press 4 to Return Book\n");
    printf(">> Press 5 to Exit\n");

    // Take user input
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You chose to add books.\n");
        printf(">> How many books do you want to add? ");
        scanf("%d", &s);

        // Consume the newline character left by scanf
        getchar();

        for (i = 0; i < s; i++)
        {
            printf("Enter the name of book %d: ", i + 1);
            fgets(name[i], 30, stdin); // Use fgets to safely take input
            name[i][strcspn(name[i], "\n")] = 0; // Remove trailing newline character
        }
        break;

    default:
        printf("Invalid choice or functionality not implemented yet.\n");
        return 0; // Exit program
    }

    // Output the entered book names
    printf("Entered books are:\n");
    for (i = 0; i < s; i++)
    {
        printf("%d. %s\n", i + 1, name[i]);
    }

    return 0;
}
