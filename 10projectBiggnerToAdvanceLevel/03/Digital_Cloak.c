#include <stdio.h>
#include <time.h>

void fill_time(char *, int);
void fill_date(char *);

int input_format();
int main()
{

    char time[50], date[100];
    int format = input_format();
    fill_time(time, format);
    fill_date(date);
    printf("\nCurrent time :%s", time);
    printf("\n Date :%s", Date);

    return 0;
}
int input_format()
{
    int format;
    printf("\n Choose the time format:");
    printf("\n 1. 24 Hour format:");
    printf("\n 2. 12 Hour format (default):");
    printf("\n Make a choice(1/2):");
    scanf("%d", &format);
    return format;
}
void fill_date(char* buffer)

void fill_time(char *buffer, int format)
{

    time_t raw_time;

    struct tm *current_time;

    time(&raw_time);
    current_time = localtime(&raw_time);
    if (format == 1)
    {

        strftime(buffer, 100, "%H:%M:%S %p", current_time);
    }
    else
    {

        strftime(buffer, 100, "%I:%M:%S %p", current_time);
    }
}
