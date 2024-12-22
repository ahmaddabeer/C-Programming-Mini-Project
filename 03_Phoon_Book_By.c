#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 10

// Structure to store contact information
typedef struct {
    char name[50];
    int age;
    int phoneNumber;
    int dob; // Date of birth as an integer in DDMMYYYY format
    char address[100];
} Contact;

void addContact(Contact contacts[], int *contactCount) {
    if (*contactCount >= MAX_CONTACTS) {
        printf("Phone book is full!\n");
        return;
    }

    Contact newContact;
    printf("Enter name: ");
    fgets(newContact.name, 50, stdin);
    newContact.name[strcspn(newContact.name, "\n")] = 0; // Removing newline character

    printf("Enter age: ");
    scanf("%d", &newContact.age);

    printf("Enter phone number: ");
    scanf("%d", &newContact.phoneNumber);

    printf("Enter date of birth (DDMMYYYY): ");
    scanf("%d", &newContact.dob);

    getchar(); // To consume the newline left by scanf

    printf("Enter address: ");
    fgets(newContact.address, 100, stdin);
    newContact.address[strcspn(newContact.address, "\n")] = 0; // Removing newline character

    contacts[*contactCount] = newContact;
    (*contactCount)++;
    printf("Contact added successfully!\n");
}

void viewContacts(Contact contacts[], int contactCount) {
    if (contactCount == 0) {
        printf("No contacts to display.\n");
        return;
    }

    for (int i = 0; i < contactCount; i++) {
        printf("\nContact %d:\n", i + 1);
        printf("Name: %s\n", contacts[i].name);
        printf("Age: %d\n", contacts[i].age);
        printf("Phone Number: %d\n", contacts[i].phoneNumber);
        printf("Date of Birth: %d\n", contacts[i].dob);
        printf("Address: %s\n", contacts[i].address);
        printf("----------------------\n");
    }
}

int main() {
    Contact contacts[MAX_CONTACTS];
    int contactCount = 0;

    while (1) {
        int choice;
        printf("\nWELCOME TO PHONE BOOK\n");
        printf("MENU:\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline left by scanf

        switch (choice) {
            case 1:
                addContact(contacts, &contactCount);
                break;
            case 2:
                viewContacts(contacts, contactCount);
                break;
            case 3:
                printf("Are you sure you want to close the phone book?\n");
                printf("Press 1 for yes, 2 for no: ");
                int exitChoice;
                scanf("%d", &exitChoice);
                if (exitChoice == 1) {
                    printf("The phone book has been closed.\n");
                    return 0;
                } else {
                    printf("You can continue using the phone book.\n");
                }
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
