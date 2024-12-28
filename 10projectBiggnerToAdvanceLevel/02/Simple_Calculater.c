#include <stdio.h>
#include <math.h>

// Function declarations
double division(double, double);
int modulus(int, int);
void print_menu();

int main()
{
    int choice;
    double first, second, result;

    while (1)
    {
        print_menu();
        scanf("%d", &choice);

        if (choice == 7)
        {
            break;
        }
        if (choice < 1 || choice > 7)
        {

            fprintf(stderr, "Invalid Menu choice.");
            continue;
        }

        printf("\nPlease enter the first number: ");
        scanf("%lf", &first);
        printf("\nNow, enter the second number: ");
        scanf("%lf", &second);

        switch (choice)
        {
        case 1: // Add
            result = first + second;
            break;

        case 2: // Subtract
            result = first - second;
            break;

        case 3: // Multiply
            result = first * second;
            break;

        case 4: // Divide
            result = division(first, second);
            break;

        case 5: // Modulus
            result = modulus((int)first, (int)second);
            break;

        case 6: // Power
            result = pow(first, second);
            break;
        }
        printf("\nResult of operation is : %.2lf\n", result);
    }
    return 0;
}

double division(double a, double b)
{
    if (b == 0)
    {
        fprintf(stderr, ">> Invalid Argument for Division\n");
        return NAN;
    }
    return a / b;
}

int modulus(int a, int b)
{
    if (b == 0)
    {
        fprintf(stderr, ">> Invalid Argument for Modulus\n");
        return 0; // Return 0 to avoid undefined behavior
    }
    return a % b;
}

void print_menu()
{
    printf("\n>> ----------------------------------------\n");
    printf("\n>> Welcome to Simple Calculator\n");
    printf(">> Choose one of the following options:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    printf("> Now, enter your choice: ");
}
