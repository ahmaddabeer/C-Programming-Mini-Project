#include <stdio.h>
#include <time.h>

void fill_time(char *);

int main()
{

    char time[100];
    fill_time(time);
    int format;
    printf("\n Choose the time format:");
    printf("\n 1. 24 Hour format:");
    printf("\n 1. 12 Hour format (default):");
    printf("\n Make a choice(1/2):");
    scanf("%d", &format);
    printf("Current time :%s", time);

    return 0;
}

void fill_time(char *buffer)
{

    time_t raw_time;

    struct tm *current_time;

    time(&raw_time);
    current_time = localtime(&raw_time);

    strftime(buffer, 100, "%I:%M:%S %p", current_time);
}
