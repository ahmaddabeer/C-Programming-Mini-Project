#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    int choice, i, s = 0;                   // s keeps track of the number of books
    char name[50][30];                      // Array to store up to 50 book names
    int issued[50] = {0};                   // Array to track issued books (0 = not issued, 1 = issued)
    char addedDate[50][20];                 // Array to store the date when books are added
    char issuedDate[50][20] = {""};         // Array to store the date when books are issued
    char returnedDate[50][20] = {""};       // Array to store the date when books are returned

    while (1) // Infinite loop for the menu
    {
        // Display menu
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. View Status\n");
        printf("6. Exit\n");

        // Take user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // Add Book
            printf("How many books do you want to add? ");
            scanf("%d", &s);
            getchar(); // Consume the newline character left by scanf

            for (i = 0; i < s; i++)
            {
                printf("Enter the name of book %d: ", i + 1);
                fgets(name[i], 30, stdin);
                name[i][strcspn(name[i], "\n")] = 0; // Remove trailing newline character
                
                // Record the current date and time
                time_t t = time(NULL);
                struct tm tm = *localtime(&t);
                sprintf(addedDate[i], "%02d-%02d-%d %02d:%02d:%02d",
                        tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
                        tm.tm_hour, tm.tm_min, tm.tm_sec);
            }
            break;

        case 2: // Search Book
            {
                char search[30];
                int found = 0;
                printf("Enter the name of the book to search: ");
                getchar(); // Consume the newline character left by scanf
                fgets(search, 30, stdin);
                search[strcspn(search, "\n")] = 0; // Remove trailing newline character

                for (i = 0; i < s; i++)
                {
                    if (strcmp(name[i], search) == 0)
                    {
                        printf("Book '%s' found at position %d.\n", name[i], i + 1);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                {
                    printf("Book not found.\n");
                }
            }
            break;

        case 3: // Issue Book
            {
                char issue[30];
                int found = 0;
                printf("Enter the name of the book to issue: ");
                getchar(); // Consume the newline character left by scanf
                fgets(issue, 30, stdin);
                issue[strcspn(issue, "\n")] = 0; // Remove trailing newline character

                for (i = 0; i < s; i++)
                {
                    if (strcmp(name[i], issue) == 0)
                    {
                        if (issued[i] == 0)
                        {
                            printf("Book '%s' has been issued.\n", name[i]);
                            issued[i] = 1;

                            // Record the current date and time for issuing
                            time_t t = time(NULL);
                            struct tm tm = *localtime(&t);
                            sprintf(issuedDate[i], "%02d-%02d-%d %02d:%02d:%02d",
                                    tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
                                    tm.tm_hour, tm.tm_min, tm.tm_sec);
                        }
                        else
                        {
                            printf("Book '%s' is already issued.\n", name[i]);
                        }
                        found = 1;
                        break;
                    }
                }
                if (!found)
                {
                    printf("Book not found.\n");
                }
            }
            break;

        case 4: // Return Book
            {
                char ret[30];
                int found = 0;
                printf("Enter the name of the book to return: ");
                getchar(); // Consume the newline character left by scanf
                fgets(ret, 30, stdin);
                ret[strcspn(ret, "\n")] = 0; // Remove trailing newline character

                for (i = 0; i < s; i++)
                {
                    if (strcmp(name[i], ret) == 0)
                    {
                        if (issued[i] == 1)
                        {
                            printf("Book '%s' has been returned.\n", name[i]);
                            issued[i] = 0;

                            // Record the current date and time for returning
                            time_t t = time(NULL);
                            struct tm tm = *localtime(&t);
                            sprintf(returnedDate[i], "%02d-%02d-%d %02d:%02d:%02d",
                                    tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
                                    tm.tm_hour, tm.tm_min, tm.tm_sec);
                        }
                        else
                        {
                            printf("Book '%s' was not issued.\n", name[i]);
                        }
                        found = 1;
                        break;
                    }
                }
                if (!found)
                {
                    printf("Book not found.\n");
                }
            }
            break;

        case 5: // View Status
            printf("\nStatus of all books:\n");
            for (i = 0; i < s; i++)
            {
                printf("Book: %s\n", name[i]);
                printf("  Added on: %s\n", addedDate[i]);
                printf("  Issued: %s\n", issued[i] ? "Yes" : "No");
                if (issued[i])
                    printf("  Issued on: %s\n", issuedDate[i]);
                if (returnedDate[i][0] != '\0')
                    printf("  Returned on: %s\n", returnedDate[i]);
                printf("\n");
            }
            break;

        case 6: // Exit
            printf("Exiting the program. Goodbye!\n");
            return 0;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
