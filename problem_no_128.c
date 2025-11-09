
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

    struct Student students[n], temp;

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(students[i].name, students[j].name) > 0)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nStudent Records Sorted by Name:\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID: %d, Name: %s, Marks: %.2f\n",
               students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}
