#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string.h>

int main()
{
    char dummy;
    printf("Press Enter to start the digital clock...");
    scanf("%c", &dummy);

    while (1)
    {
        time_t now = time(NULL);
        struct tm *t = localtime(&now);

        int hour = t->tm_hour;
        int minute = t->tm_min;
        int second = t->tm_sec;
        char meridiem[3];

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

        printf("\r%02d:%02d:%02d %s", hour, minute, second, meridiem);
        fflush(stdout);

        Sleep(1000);
    }

    return 0;
}

