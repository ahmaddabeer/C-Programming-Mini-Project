#include <stdio.h>
int main()

{
    /*1. Add Book
    2. Search Book
    3. Issue Book
    4. Return Book
    5. Exit
    Enter your choice:

    This is qustion let's solve it*/

    int choice,i, name();

    printf(">> Press 1 to Add Book\n");
    printf(">> Press 2 to Search Book\n");
    printf(">> Press 3 to Issue Book\n");
    printf(">> Press 4 to Return Book\n");
    printf(">> Press 5 to Exit\n");

    // lets take the user value

    printf("Enter your choices: ");
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        printf("You choose to add book\n");
        printf("How many Book you add ");

        scanf("  %d", &choice);
         printf("Enter your Book;s name: ");
        for(i = 0; i<choice; i++){

         gets("name");
            

        }
    }

    
    
}