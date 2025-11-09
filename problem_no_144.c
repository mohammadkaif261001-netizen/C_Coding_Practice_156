#include <stdio.h>

int main()
{
    int hour, minute, second;
    char meridiem[3];

    printf("Enter time in 24-hour format (HH MM SS): ");
    scanf("%d %d %d", &hour, &minute, &second);

    if (hour >= 0 && hour < 24 && minute >= 0 && minute < 60 && second >= 0 && second < 60)
    {
        if (hour >= 12)
        {
            strcpy(meridiem, "PM");
            if (hour > 12)
                hour -= 12;
        }
        else
        {
            strcpy(meridiem, "AM");
            if (hour == 0)
                hour = 12;
        }

        printf("Time in 12-hour format: %02d:%02d:%02d %s\n", hour, minute, second, meridiem);
    }
    else
    {
        printf("Invalid time input.\n");
    }

    return 0;
}
