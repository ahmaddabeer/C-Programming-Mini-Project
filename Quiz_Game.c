#include <stdio.h>

int main()
{
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1 = 0, point2 = 0, point3 = 0, point4 = 0, point5 = 0;
    int total = 0;

    printf("   Welcome to the Game\n");
    printf("> Press 7 to start the game\n");
    printf("> Press 0 to end the game\n");

    scanf("%d", &i);

    if (i == 7)
    {
        printf("The Game Has Started\n");

        // Question 1
        printf("1) Which one is the first search engine on the internet?\n");
        printf("1) Google\n");
        printf("2) Archie\n");
        printf("3) Wais\n");
        printf("4) Altavista\n");
        printf("Enter Your Answer: ");
        scanf("%d", &ans1);

        if (ans1 == 2)
        {
            printf("Correct Answer!\n");
            point1 = 5;
        }
        else
        {
            printf("Wrong Answer.\n");
        }

        // Question 2
        printf("\n2) Which one is the first web browser invented in 1990?\n");
        printf("1) Internet Explorer\n");
        printf("2) Mosaic\n");
        printf("3) Mozilla\n");
        printf("4) Nexus\n");
        printf("Enter Your Answer: ");
        scanf("%d", &ans2);

        if (ans2 == 4)
        {
            printf("Correct Answer!\n");
            point2 = 5;
        }
        else
        {
            printf("Wrong Answer.\n");
        }

        // Question 3
        printf("\n3) Which of the following is NOT an input device?\n");
        printf("1) Keyboard\n");
        printf("2) Mouse\n");
        printf("3) Monitor\n");
        printf("4) Scanner\n");
        printf("Enter Your Answer: ");
        scanf("%d", &ans3);

        if (ans3 == 3)
        {
            printf("Correct Answer!\n");
            point3 = 5;
        }
        else
        {
            printf("Wrong Answer.\n");
        }

        // Question 4
        printf("\n4) What does HTTP stand for?\n");
        printf("1) Hyper Text Transmission Protocol\n");
        printf("2) Hyper Transfer Text Protocol\n");
        printf("3) Hyper Text Transfer Protocol\n");
        printf("4) Hyper Transfer Transmission Protocol\n");
        printf("Enter Your Answer: ");
        scanf("%d", &ans4);

        if (ans4 == 3)
        {
            printf("Correct Answer!\n");
            point4 = 5;
        }
        else
        {
            printf("Wrong Answer.\n");
        }

        // Question 5
        printf("\n5) In binary code, how is the decimal number 5 represented?\n");
        printf("1) 101\n");
        printf("2) 100\n");
        printf("3) 110\n");
        printf("4) 111\n");
        printf("Enter Your Answer: ");
        scanf("%d", &ans5);

        if (ans5 == 1)
        {
            printf("Correct Answer!\n");
            point5 = 5;
        }
        else
        {
            printf("Wrong Answer.\n");
        }

        // Calculate total points
        total = point1 + point2 + point3 + point4 + point5;

        // End of Game
        printf("\nGame Over! Your total score is: %d/25\n", total);
    }
    else if (i == 0)
    {
        printf("The Game Has Ended.\n");
    }
    else
    {
        printf("Invalid Input.\n");
    }

    return 0;
}
