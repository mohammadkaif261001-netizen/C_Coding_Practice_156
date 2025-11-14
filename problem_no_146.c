#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    printf("\nFormat 1 (DD/MM/YYYY): %02d/%02d/%04d\n", day, month, year);
    printf("Format 2 (MM-DD-YYYY): %02d-%02d-%04d\n", month, day, year);
    printf("Format 3 (YYYY.MM.DD): %04d.%02d.%02d\n", year, month, day);
    printf("Format 4 (DD Month YYYY): %02d-%02d-%04d\n", day, month, year);

    return 0;
}
