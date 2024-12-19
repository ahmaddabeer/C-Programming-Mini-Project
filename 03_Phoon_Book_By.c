#include <stdio.h>
int main()
{

    char n[50], add[50], na[50], addr[50];
    int a, p, d, age, ph, da;

    printf("WELCOME TO PHONE BOOK\n\n");
    printf("MENU\n");
    printf("Press 1 to add the contact\n\n ");

    int x;
    printf("Enter\n");
    printf("%d", x);

    if (x == 1)
    {

        int y;
        printf("Enter the number of contact to be added : ");
        printf("%d", y);

        if (y == 1)
        {

            printf("----------------------\n");
            printf("Name :");
            printf("%s", n);
            printf("Age :");
            printf("%d", a);
            printf("Phone Number : ");
            printf("%d", p);
            printf("Date of Birth : ");
            printf("%d", d);
            printf("Address : ");
            printf("%d", add);
            printf("--------------------\n");
        }
        else if (y == 2)
        {

            printf("----------------------\n");
            printf("Name :");
            printf("%s", na);
            printf("Age :");
            printf("%d", age);
            printf("Phone Number : ");
            printf("%d", ph);
            printf("Date of Birth : ");
            printf("%d", da);
            printf("Address : ");
            printf("%d", addr);
            printf("--------------------\n");
        }
        printf("Press 2 to see the entered contact\n");
        printf("Press 3 to exit the phone book\n");

        int z;
        printf("Enter\n");
        printf("%d", z);

        if (z == 2)
        {

            int num;
            printf("Enter the number of contect to be viewed : ");

            printf("----------------------\n");
            printf("Name :");
            printf("%s", n);
            printf("Age :");
            printf("%d", a);
            printf("Phone Number : ");
            printf("%d", p);
            printf("Date of Birth : ");
            printf("%d", d);
            printf("Address : ");
            printf("%d", add);
            printf("--------------------\n");
        }

        else if (num == 2)
        {

            printf("----------------------\n");
            printf("Name :");
            printf("%s", n);
            printf("Age :");
            printf("%d", a);
            printf("Phone Number : ");
            printf("%d", p);
            printf("Date of Birth : ");
            printf("%d", d);
            printf("Address : ");
            printf("%d", add);
            printf("--------------------\n");

            printf("----------------------\n");
            printf("Name :");
            printf("%s", na);
            printf("Age :");
            printf("%d", age);
            printf("Phone Number : ");
            printf("%d", ph);
            printf("Date of Birth : ");
            printf("%d", da);
            printf("Address : ");
            printf("%d", addr);
            printf("--------------------\n");
        }

        else if (z == 3)
        {

            printf("Are you sure you want to close the phone book\n");
            printf("Press 1 for yess\n");
            printf("Press 2 for noo\n");
            int ans;

            printf("Enter \n");
            scanf("%d", &ans);
            if (ans == 1)
            {

                printf("The phone has closed \n");
                printf("Have a good day \n");
            }

            else if (ans == 2)
            {

                printf("")
            }
        }
    }
}