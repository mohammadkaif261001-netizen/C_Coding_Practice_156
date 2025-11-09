#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[50];
    float marks;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // to read full name with spaces
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID: %d, Name: %s, Marks: %.2f\n",
               students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}
