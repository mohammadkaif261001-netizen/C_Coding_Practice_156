#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[50];
    int age;
    float marks;
};

int main()
{
    int n, choice;
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
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("Sort by 1. ID  2. Age\nEnter choice: ");
    scanf("%d", &choice);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int swap = 0;
            if (choice == 1 && students[i].id > students[j].id)
                swap = 1;
            else if (choice == 2 && students[i].age > students[j].age)
                swap = 1;

            if (swap)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nSorted Student Records:\n");
    for (int i = 0; i < n; i++)
    {
        printf("ID: %d, Name: %s, Age: %d, Marks: %.2f\n",
               students[i].id, students[i].name, students[i].age, students[i].marks);
    }

    return 0;
}
