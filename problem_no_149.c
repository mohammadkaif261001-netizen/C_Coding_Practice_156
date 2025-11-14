#include <stdio.h>

int main()
{
    int hours;
    int minutes, seconds;

    printf("Enter hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;
    seconds = hours * 3600;

    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    return 0;
}
