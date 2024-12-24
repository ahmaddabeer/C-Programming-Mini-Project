#include <stdio.h>

int main() {
    char names[5][50]; // Array to store 5 names, each up to 49 characters

    printf("Enter 5 names:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        gets(names[i]); // Reads a line of text including spaces
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < 5; i++) {
        puts(names[i]); // Prints the name
    }

    return 0;
}
